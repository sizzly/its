;(function	($)	{

	// Toggle border of control group
	$('#toggleLine').click(function()	{			
		if($(this).is(':checked'))	{
			$('#formToggleLine').addClass('form-border');
		}
		else	{
			$('#formToggleLine').removeClass('form-border');
		}
	});

	// Draggable Multiselect
	$('#btnSelect').click(function()	{
				
		$('#selectedBox1 option:selected').appendTo('#selectedBox2');  
		return false;
	});

	$('#btnRemove').click(function()	{
		$('#selectedBox2 option:selected').appendTo('#selectedBox1'); 
		return false;
	});

	$('#btnSelectAll').click(function()	{
			
		$('#selectedBox1 option').each(function() {               
           $(this).appendTo('#selectedBox2');                   
        });

		return false;
	});

	$('#btnRemoveAll').click(function()	{
			
		$('#selectedBox2 option').each(function() {                  
			$(this).appendTo('#selectedBox1');            
        });

		return false;
	});
})(jQuery);