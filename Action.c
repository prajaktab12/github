Action()
{
	
		lr_start_transaction("DPSOnly_TR01_Launch_Page");	
	
	web_url("{var_Environment}", 
		"URL=https://blazedemo.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 

		LAST);



	lr_end_transaction("DPSOnly_TR01_Launch_Page",LR_AUTO);
	
	
	return 0;
}
