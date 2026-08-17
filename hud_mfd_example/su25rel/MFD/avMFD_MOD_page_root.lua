

function manage_directorys()

			for i=1,20 do
				mm_mfd_btn[i].text.h_status:set(mm_mfd_btn[i].text.status)
				mm_mfd_btn[i].text.h_text:set(mm_mfd_btn[i].text.text)
			end

	
end




function clean_directory()

		for i = 1,20 do
				mm_mfd_btn[i].text.text 	= ""
				mm_mfd_btn[i].text.status 	= 0
				mm_mfd_btn[i].func_short 	= nothing
				mm_mfd_btn[i].func_long		= nothing
		end
		
			mm_mfd_btn[15].text.text 	= "ENG"
			mm_mfd_btn[15].func_short 	= eng_open_directory
			mm_mfd_btn[15].func_long	= nothing
		
				mm_mfd_btn[14].text.text 	= ""
				mm_mfd_btn[14].func_short 	= nothing
				mm_mfd_btn[14].func_long	= nothing
		
					mm_mfd_btn[13].text.text 	= "ROOT"
					mm_mfd_btn[13].func_short 	= root_open_directory
					mm_mfd_btn[13].func_long	= nothing
			
						mm_mfd_btn[12].text.text 	= "BMAP"
						mm_mfd_btn[12].func_short 	= bmap_open_directory
						mm_mfd_btn[12].func_long	= nothing
					
							mm_mfd_btn[11].text.text 	= ""
							mm_mfd_btn[11].func_short 	= nothing
							mm_mfd_btn[11].func_long	= nothing
							
		--CLOSE OTHER PAGES--
		
				mm_mfd_pagedata.eng_page_handle:set(0)
											--mm_mfd_pagedata.eng_page_handle:set(0)
				mm_mfd_pagedata.root_page_handle:set(0)
				mm_mfd_pagedata.bmap_page_handle:set(0)
											--mm_mfd_pagedata.eng_page_handle:set(0)
		------------------------------------------
			
		--debug
		--mm_mfd_SOI = 5/255	--focus
		mm_mfd_SOI_param:set(mm_mfd_SOI)
		--/debug	
			
end


function root_open_directory()
			
			clean_directory()

		----------------------------------------------------------------------------
		----------------------------------------------------------------------------
			
			mm_mfd_btn[9].text.text 	= ""
			mm_mfd_btn[9].func_short 	= nothing
			mm_mfd_btn[9].func_long		= nothing
			
			mm_mfd_btn[10].text.text 	= ""
			mm_mfd_btn[10].func_short 	= nothing
			mm_mfd_btn[10].func_long	= nothing
			
		--------------------------------------
		
			mm_mfd_btn[16].text.text 	= ""
			mm_mfd_btn[16].func_short 	= nothing
			mm_mfd_btn[16].func_long	= nothing
		
			mm_mfd_btn[17].text.text 	= ""
			mm_mfd_btn[17].func_short 	= nothing
			mm_mfd_btn[17].func_long	= nothing
		
		
			
		----------------------------------------------------------------------------
		----------------------------------------------------------------------------
		mm_mfd_btn[13].text.text 	= "ROOT"
		mm_mfd_btn[13].func_short 	= nothing
		mm_mfd_btn[13].func_long	= nothing
		mm_mfd_btn[13].text.status 	= 1
		------------------------------------------
		manage_directorys()
				
		mm_mfd_cur_page = "root"
		mm_mfd_pagedata.root_page_handle:set(1)
		--------------------------------------
		
		--debug
		mm_mfd_SOI = 30/255	--focus
		mm_mfd_SOI_param:set(mm_mfd_SOI)
		--/debug	

end



function open_directory(pagename)
	mm_mfd_cur_page = pagename
	for i = 1,20 do
	
		if mm_mfd_btn[i].text.text ~= "" then
			mm_mfd_btn[i].text.text 	= mm_mfd_pagedata[pagename].btn_text[i]
			mm_mfd_btn[i].func_short 	= bmap_open_directory--mm_mfd_pagedata[pagename].btn_func_short[i]
			mm_mfd_btn[i].func_long		= mm_mfd_pagedata[pagename].btn_func_long[i]
		
			mm_mfd_btn[i].text.h_text:set(mm_mfd_pagedata[pagename].btn_text[i])
			
		elseif mm_mfd_btn[i].text.text ~= "" and pagename == "root" then
		
			mm_mfd_btn[i].text.text 	= mm_mfd_pagedata[pagename].btn_text[i]
			mm_mfd_btn[i].func_short 	= bmap_open_directory--mm_mfd_pagedata[pagename].btn_func_short[i]
			mm_mfd_btn[i].func_long		= mm_mfd_pagedata[pagename].btn_func_long[i]
		
			mm_mfd_btn[i].text.h_text:set(mm_mfd_pagedata[pagename].btn_text[i])
		
		end
	end

end

function root_func_13_short()
	print_message_to_user("root_func_13_short")
end

function root_func_13_long()
	print_message_to_user("root_func_13_long")
end


--print_message_to_user( mm_mfd_pagedata[test].btn_text[13])
