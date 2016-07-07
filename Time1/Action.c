Action()
{
	
	   lr_save_datetime("%Y-%m-%dT%H:%M:%S.000Z", DATE_NOW + ONE_HOUR*7, "PST");

      lr_save_datetime("%Y-%m-%dT%H:%M:%S.000Z", DATE_NOW , "PST");
      lr_output_message("PST time is = %s ", lr_eval_string("{PST}"));
      
      lr_save_datetime("%Y-%m-%dT%H:%M:%S.000Z", DATE_NOW + ONE_HOUR*3 , "EST");
      lr_output_message("EST time is = %s ", lr_eval_string("{EST}"));
      
      lr_save_datetime("%Y-%m-%dT%H:%M:%S.000Z", DATE_NOW + ONE_HOUR*2 , "CST");
      lr_output_message("CST time is = %s ", lr_eval_string("{CST}"));
      
	return 0;
}
