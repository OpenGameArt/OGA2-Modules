(function($) {
    $(function() {
        init_collect();
    });  
    
    function refresh_items() {
        var self = $('#collections-list');
        var collection = self.val();
        if(collection == 0) {
            $('.collect-toggle').hide();
            $('.field-name-collect-toggle').hide();
        } else {
            $('.collect-toggle').show();
            $('.field-name-collect-toggle').show();
            var nids = '';
            var first = true;
            $('.collect-toggle a').each(function() {
                if(!first) nids += '+';
                var nid = $(this).attr('data-nid');
                nids += nid.toString();
                first = false;
            });
            
            var link = "/collected/" + nids + "/" + collection;
            $.getJSON(link, function(data) {
                $.each(data, function(index, value) {
                    var e = $('.collect-toggle a[data-nid="' + index + '"]');
                    if(value == 0) {
                        e.removeClass('collect-toggle-remove').addClass('collect-toggle-add').removeClass('collect-toggle-wait');
                    } else {
                        e.addClass('collect-toggle-remove').removeClass('collect-toggle-add').removeClass('collect-toggle-wait');
                    }
                });
            });
        }
    }
    
    function init_collect() {
        $('.collect-remove').click(function() {
            var link = $(this).attr('href');
            var container = $(this).parents('.collect-container');
            container.html("Working...");
            $.getJSON(link, function(data) {
                container.replaceWith(data.result);
                init_collect();
            });
            return false;
        });
        
        $('#art-collect').click(function() {
            var nid = $(this).attr('data-nid');
            var collection = $('#collections-list').val();
            var link = "/collect/add/" + nid + "/" + collection;
            var container = $(this).parents('.collect-container');
            container.html("Working...");
            $.getJSON(link, function(data) {
                container.replaceWith(data.result);
                init_collect();
            });
        });
        
        $('#collections-list').change(function() {
            refresh_items();
        });
        
        $('div.view-art').parent().delegate('.collect-toggle a', 'click', function() {
            var collection = $('#collections-list').val();
            var nid = $(this).attr('data-nid');
            var action = 'add';
            if($(this).hasClass('collect-toggle-remove')) { 
                action = 'remove';
            }
            var link = "/collect-toggle/" + action + "/" + nid + "/" + collection;
            var container = $(this);
            container.html("...");
            container.addClass('collect-toggle-wait').removeClass('collect-toggle-remove').removeClass('collect-toggle-add');
            $.getJSON(link, function(data) {
                var result = data.result;
                if(result == 'Collect') {
                    container.removeClass('collect-toggle-remove').addClass('collect-toggle-add');
                } else if(result == 'Remove') {
                    container.addClass('collect-toggle-remove').removeClass('collect-toggle-add');
                }
            });
        });
        
        $('.collect-message').fadeIn().delay(5000).fadeOut();
        
        $('body').ajaxComplete(function(e, xhr, settings) {
            if(settings.url == '/views/ajax') {
                refresh_items();
            }
        });

        var self = $('#collections-list');
        var collection = self.val();
        if(collection == 0 || self.length == 0) {
            $('.collect-toggle').hide();
            $('.field-name-collect-toggle').hide();
        }
    }
})(jQuery);
