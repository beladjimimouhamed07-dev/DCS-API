




function eng_open_directory()

			clean_directory()
			
		----------------------------------------------------------------------------
		----------------------------------------------------------------------------
		
			mm_mfd_btn[6].text.text 	= ""
			mm_mfd_btn[6].func_short 	= nothing
			mm_mfd_btn[6].func_long		= nothing
			
			mm_mfd_btn[7].text.text 	= ""
			mm_mfd_btn[7].func_short 	= nothing
			mm_mfd_btn[7].func_long		= nothing
			
			mm_mfd_btn[8].text.text 	= ""
			mm_mfd_btn[8].func_short 	= nothing
			mm_mfd_btn[8].func_long		= nothing
			
			mm_mfd_btn[9].text.text 	= ""
			mm_mfd_btn[9].func_short 	= nothing
			mm_mfd_btn[9].func_long		= nothing
			
			mm_mfd_btn[10].text.text 	= ""
			mm_mfd_btn[10].func_short 	= nothing
			mm_mfd_btn[10].func_long	= nothing
		
		--------------------------------------
		
		--------------------------------------
		
			mm_mfd_btn[20].text.text 	= ""
			mm_mfd_btn[20].func_short 	= nothing
			mm_mfd_btn[20].func_long	= nothing
		
		--------------------------------------
		
		
		----------------------------------------------------------------------------
		----------------------------------------------------------------------------
		mm_mfd_btn[15].text.text 	= "ENG"
		mm_mfd_btn[15].func_short 	= nothing
		mm_mfd_btn[15].func_long	= nothing
		
		mm_mfd_btn[15].text.status 	= 1
		--------------------------------------
		manage_directorys()
		mm_mfd_cur_page = "ENG"
		mm_mfd_pagedata.eng_page_handle:set(1)
						
		--------------------------------------
end

