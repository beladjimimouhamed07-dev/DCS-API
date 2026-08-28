-- Commands : not intended for end-user editing

start_command	= 10000
local count = 0
local function counter()
	count = count + 1
	return count
end

count = start_command
device_commands = {}
for cmd_num = 1,70 do
	device_commands["Button_"..cmd_num] = counter()
end

-- RWR ADI RAFALE
count = start_command
adi_commands =
{
	BrtKnob			= counter();
}



-- RBE2 V1 DROP-IN COMMANDS
rbe2_commands = {
    VTM_TOGGLE=counter(); MODE_RWS=counter(); MODE_TWS=counter(); MODE_STT=counter(); MODE_GMT=counter(); MODE_SAR=counter();
    RANGE_UP=counter(); RANGE_DOWN=counter();
    TDC_UP=counter(); TDC_RIGHT=counter(); TDC_DOWN=counter(); TDC_LEFT=counter();
    TARGET_LOCK=counter(); TARGET_UNLOCK=counter(); TARGET_NEXT=counter(); TARGET_PREV=counter();
}

osf_commands = {
    TV=counter(); FLIR=counter(); TOGGLE=counter();
    ZOOM_IN=counter(); ZOOM_OUT=counter();
}
