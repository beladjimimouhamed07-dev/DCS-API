local count = 0
local function counter()
    count = count + 1
    return count
end

SUB_PAGE_ID = {}
count = 0

SUB_PAGE_ID = {
    BASE         = 0,
    OFF          = counter(),
    MAIN         = counter(),
  
}

SUB_PAGE_NAME = {}
SUB_PAGE_NAME[SUB_PAGE_ID.OFF]   	= ""
SUB_PAGE_NAME[SUB_PAGE_ID.MAIN]    	= "MAIN"

count = 0

PAGE_ID = SUB_PAGE_ID.OFF



