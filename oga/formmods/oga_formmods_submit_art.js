(function($) { 
  function licenseChecked(item) {
    $(item).parents('.form-item').first().toggleClass('art-license-selected', $(item).is(':checked'));
  }

  function authorInfo() {
    var value = $('input[name="your_own_work"]:checked').val();
    if(value == 'Yes') {
      $('#node_art_form_group_author_information').fadeOut();
    }
    else if(value == 'No') {
      $('#node_art_form_group_author_information').fadeIn();
    }
  }

  $(function() {
    $('#edit-field-art-licenses input.form-checkbox').each(function() {
      licenseChecked(this);
    });

    $('#edit-field-art-licenses input.form-checkbox').change(function() {
      licenseChecked(this);
    });

    $('input[name="your_own_work"]').change(function() {
      authorInfo();
    });

    $('#edit-field-art-tags-und').keyup(function() {
      var val = $(this).val();
      if(val.indexOf(" ") > 0 && val.indexOf(",") == -1) {
        $('#commasep').addClass('red');
      } else {
        $('#commasep').removeClass('red');
      }
    });

    $('#edit-field-art-tags-und').focusout(function() {
      $(this).trigger('keyup');
    });
    
    authorInfo();
  });
})(jQuery);
