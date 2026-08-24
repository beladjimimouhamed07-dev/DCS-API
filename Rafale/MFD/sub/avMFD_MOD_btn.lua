




mm_mfd_btn	= {}
	for i = 0, 20 do	
		mm_mfd_btn[i]	= 	{	
								mark 	= 	{
											h_status 	= get_param_handle("MM_MFD_B_" .. i),
											h_color 	= get_param_handle("MM_MFD_BC_" .. i),
											status 		= 0,
											color		= 0,
											},
								text  	= 	{
											h_text 		= get_param_handle("MM_MFD_BT_" .. i),
											h_status	= get_param_handle("MM_MFD_BTS_" .. i),
											text		= "ABCD\nOOOO\nEFGH",
											status		= 0,	--0 backblack,greentext		--1 green back, black text
											},
								func_short 	= nothing,
								func_long 	= nothing,
							}				
		mm_mfd_btn[i].mark.h_status:set(mm_mfd_btn[i].mark.status)
		mm_mfd_btn[i].text.h_text:set(mm_mfd_btn[i].text.text)
		mm_mfd_btn[i].text.h_status:set(mm_mfd_btn[i].text.status)
			
	end

	mm_mfd_btn[0].mark.h_status:set(0)
	mm_mfd_btn[0].text.h_text:set("")
	mm_mfd_btn[0].text.h_status:set(0)
	
	
--------------------

