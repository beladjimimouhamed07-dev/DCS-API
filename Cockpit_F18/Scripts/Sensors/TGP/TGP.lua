use_native_axis  = true
use_digital_zoom = false -- Set to false as digital zoom results in unacceptably low picture quality

keyboard_slew_magnifier = 5
use_synthetic_IR_effect = true -- false
			
ir_sharpness    			= 0.0002 -- sharpness of TGP IR image, Float - 0...1.

ir_levels_count 			= 9      -- TGP IR image levels count, Int.
ir_gains_count  			= 9	     -- TGP IR image gains count, Int.

-- initial IR image gain value, Int - 0...9. Used in manual gain control.
ir_init_gain    			= 3
-- initial IR image level value, Int - 0...9. Used in manual level control.
ir_init_level   			= 4

-- IR image automatic gain values, Float - 0...9. Used in ALG (Automatic Level/Gain control).
ir_auto_gain_day			= 3
ir_auto_gain_night			= 3
					 
-- IR image automatic level values, Float - 0...9. Used in ALG (Automatic Level/Gain control).
ir_auto_level_day			= 4
ir_auto_level_night			= 4

-- Timer update time
device_timer_dt = 0.05

-- MASK
regions = {} 

local max_pnts = {
	{math.rad(-180.0),	math.rad(90.0)},	--1
	{math.rad(0.0),		math.rad(90.0)},	--2
	{math.rad(180.0),	math.rad(90.0)},	--3
	{math.rad(-180.0),	math.rad(-0.8)},	--4
	{math.rad(-138.5),	math.rad(-0.8)},	--5*
	{math.rad(-80.7),	math.rad(-0.4)},    --6
	{math.rad(-66.7),	math.rad(0.3)},     --7
	{math.rad(-57.9),	math.rad(1.5)},     --8
	{math.rad(-53.1),	math.rad(1.0)},     --9
	{math.rad(-55.3),	math.rad(-3.4)},    --10
	{math.rad(-43.1),	math.rad(-4.5)},    --11
	{math.rad(-37.4),	math.rad(-4.3)},    --12
	{math.rad(-35.5),	math.rad(-0.3)},    --13
	{math.rad(-29.8),	math.rad(-0.1)},    --14
	{math.rad(-26.9),	math.rad(1.2)},     --15
	{math.rad(-26.9),	math.rad(3.3)},     --16
	{math.rad(-30.0),	math.rad(5.1)},     --17
	{math.rad(-35.1),	math.rad(7.4)},     --18
	{math.rad(-36.8),	math.rad(14.5)},    --19
	{math.rad(-42.6),	math.rad(16.4)},    --20
	{math.rad(-49.1),	math.rad(12.0)},    --21
	{math.rad(-63.7),	math.rad(16.8)},    --22
	{math.rad(-83.6),	math.rad(36.2)},    --23
	{math.rad(-65.2),	math.rad(47.1)},    --24
	{math.rad(-41.7),	math.rad(53.4)},    --25
	{math.rad(-8.9),	math.rad(53.4)},    --26
	{math.rad(0.0),		math.rad(23.5)},    --27*
	{math.rad(5.1),		math.rad(12.4)},    --28
	{math.rad(5.3),		math.rad(5.4)},     --29
	{math.rad(7.1),		math.rad(2.1)},     --30
	{math.rad(10.5),	math.rad(0.4)},     --31
	{math.rad(22.1),	math.rad(-0.5)},    --32
	{math.rad(34.1),	math.rad(2.6)},     --33
	{math.rad(59.6),	math.rad(2.5)},     --34
	{math.rad(61.4),	math.rad(0.3)},     --35
	{math.rad(73.0),	math.rad(-1.8)},    --36
	{math.rad(106.6),	math.rad(-0.4)},    --37
	{math.rad(180.0),	math.rad(-0.4)},    --38
}

local min_pnts = {
	{math.rad(-180.0),	math.rad(90.0)},	--1
	{math.rad(0.0),		math.rad(90.0)},	--2
	{math.rad(180.0),	math.rad(90.0)},	--3
	{math.rad(-180.0),	math.rad(0.0)},		--4
	{math.rad(-140.4),	math.rad(-13.3)},   --5*
	{math.rad(-136.1),	math.rad(-14.7)},   --6
	{math.rad(-107.2),	math.rad(-21.6)},   --7
	{math.rad(-84.7),	math.rad(-23.4)},   --8
	{math.rad(-64.1),	math.rad(-22.3)},   --9
	{math.rad(-45.6),	math.rad(-18.2)},   --10
	{math.rad(-28.8),	math.rad(-10.0)},   --11
	{math.rad(-24.4),	math.rad(-4.9)},    --12
	{math.rad(-23.8),	math.rad(-3.3)},    --13
	{math.rad(-24.4),	math.rad(-1.1)},    --14
	{math.rad(-28.8),	math.rad(3.5)},     --15
	{math.rad(-45.6),	math.rad(12.6)},    --16
	{math.rad(-64.1),	math.rad(17.9)},    --17
	{math.rad(-84.7),	math.rad(34.1)},    --18
	{math.rad(-65.2),	math.rad(47.1)},    --19
	{math.rad(-41.7),	math.rad(53.4)},    --20
	{math.rad(-8.9),	math.rad(53.4)},    --21
	{math.rad(0.0),		math.rad(23.5)},    --22
	{math.rad(5.1),		math.rad(12.4)},    --23
	{math.rad(5.3),		math.rad(5.4)},     --24
	{math.rad(7.1),		math.rad(2.1)},     --25
	{math.rad(24.6),	math.rad(-12.0)},   --26
	{math.rad(37.3),	math.rad(-18.0)},   --27
	{math.rad(58.4),	math.rad(-24.7)},   --28
	{math.rad(72.7),	math.rad(-27.2)},   --29
	{math.rad(80.0),	math.rad(-27.6)},   --30
	{math.rad(86.9),	math.rad(-27.4)},   --31
	{math.rad(104.0),	math.rad(-25.5)},   --32
	{math.rad(124.2),	math.rad(-19.2)},   --33
	{math.rad(138.0),	math.rad(-9.4)},    --34
	{math.rad(180.0),	math.rad(0.0)},     --35
}

local maxC_pnts = {
	{math.rad(-180.0),	math.rad(90.0)},	--1
	{math.rad(0.0),		math.rad(90.0)},	--2
	{math.rad(180.0),	math.rad(90.0)},	--3
	{math.rad(-180.0),	math.rad(0.0)},		--4
	{math.rad(-117.5),	math.rad(2.9)},		--5*
	{math.rad(-116.9),	math.rad(0.8)},		--6
	{math.rad(-108.8),	math.rad(0.4)},		--7
	{math.rad(-101.9),	math.rad(2.5)},		--8
	{math.rad(-93.9),	math.rad(2.9)},		--9
	{math.rad(-90.8),	math.rad(3.4)},		--10
	{math.rad(-88.5),	math.rad(5.3)},		--11
	{math.rad(-90.8),	math.rad(7.2)},		--12
	{math.rad(-101.4),	math.rad(8.2)},		--13
	{math.rad(-106.2),	math.rad(8.3)},		--14
	{math.rad(-108.2),	math.rad(10.0)},	--15
	{math.rad(-111.7),	math.rad(11.6)},	--16
	{math.rad(-116.2),	math.rad(11.4)},	--17
	{math.rad(-118.7),	math.rad(10.1)},	--18
	{math.rad(-120.9),	math.rad(10.3)},	--19*
	{math.rad(-128.7),	math.rad(31.8)},	--20
	{math.rad(-112.7),	math.rad(37.2)},	--21
	{math.rad(-87.2),	math.rad(41.5)},	--22
	{math.rad(-71.4),	math.rad(41.4)},	--23
	{math.rad(-55.7),	math.rad(39.4)},	--24
	{math.rad(-31.3),	math.rad(32.2)},	--25
	{math.rad(-20.7),	math.rad(26.7)},	--26
	{math.rad(-17.1),	math.rad(17.6)},	--27
	{math.rad(-5.3),	math.rad(4.9)},		--28
	{math.rad(0.0),		math.rad(1.9)},		--29
	{math.rad(-110.3),	math.rad(9.3)},		--30*
	{math.rad(-98.5),	math.rad(7.0)},		--31
	{math.rad(-89.3),	math.rad(4.0)},		--32
	{math.rad(-83.6),	math.rad(0.7)},		--33
	{math.rad(-83.0),	math.rad(-0.3)},	--34
	{math.rad(-83.6),	math.rad(-1.3)},	--35
	{math.rad(-89.3),	math.rad(-3.8)},	--36
	{math.rad(-98.5),	math.rad(-5.9)},	--37
	{math.rad(-110.3),	math.rad(-7.0)},	--38
	{math.rad(-115.8),	math.rad(-7.0)},	--39
	{math.rad(-121.9),	math.rad(-6.6)},	--40
	{math.rad(-138.7),	math.rad(-4.5)},	--41
	{math.rad(-180.0),	math.rad(0.0)},		--42
}

function make_region(source,indexes,inverse)
	local region = {}
	i = 1
	for j = 1,#indexes do
		region[i]    = {}
		if inverse then	region[i][1] = -source[indexes[j]][1]
		else			region[i][1] =  source[indexes[j]][1]	
		end				region[i][2] =  source[indexes[j]][2]
		i = i + 1
	end
	return region
end

local 	TGP  = GetSelf()
package.path = "?;?.lua;./Config/Export/?.lua;./Scripts/?.lua"

mask = {}
mask[1] = {}
mask[1].regions = {}  
mask[2] = {}
mask[2].regions = {} 
mask[3] = {}
mask[3].regions = {} 
mask[4] = {}
mask[4].regions = {} 
mask[5] = {}
mask[5].regions = {}  
mask[6] = {}
mask[6].regions = {} 
mask[7] = {}
mask[7].regions = {} 
mask[8] = {}
mask[8].regions = {} 

--mask[1] = max_L
mask[1].regions[1]	= make_region(max_pnts,{1,8,7,6,5,4})
mask[1].regions[2]	= make_region(max_pnts,{22,21,9,8})
mask[1].regions[3]	= make_region(max_pnts,{21,20,19,18,13,12,11,10,9})
mask[1].regions[4]	= make_region(max_pnts,{18,17,16,15,14,13})
mask[1].regions[5]	= make_region(max_pnts,{1,23,22,8})
mask[1].regions[6]	= make_region(max_pnts,{1,24,23})
mask[1].regions[7]	= make_region(max_pnts,{1,25,24})
mask[1].regions[8]	= make_region(max_pnts,{1,2,26,25})
mask[1].regions[9]	= make_region(max_pnts,{2,27,26})
--mask[2] = max_R
mask[2].regions[1]	= make_region(max_pnts,{3,38,37})
mask[2].regions[2]	= make_region(max_pnts,{3,37,36,35,34})
mask[2].regions[3]	= make_region(max_pnts,{3,34,33})
mask[2].regions[4]	= make_region(max_pnts,{3,33,32,31,30,29,28})
mask[2].regions[5]	= make_region(max_pnts,{2,3,28,27})
--mask[3] = min_L
mask[3].regions[1]	= make_region(min_pnts,{17,16,15,14,13,12,11,10,9,8,7,6,5,4})
mask[3].regions[2]	= make_region(min_pnts,{18,17,4})
mask[3].regions[3]	= make_region(min_pnts,{1,19,18,4})
mask[3].regions[4]	= make_region(min_pnts,{1,2,20,19})
mask[3].regions[5]	= make_region(min_pnts,{2,21,20})
mask[3].regions[6]	= make_region(min_pnts,{2,22,21})
--mask[4] = min_R
mask[4].regions[1]	= make_region(min_pnts,{3,35,34})
mask[4].regions[2]	= make_region(min_pnts,{3,34,33,32,31,30,29,28,27,26,25,24})
mask[4].regions[3]	= make_region(min_pnts,{3,24,23})
mask[4].regions[4]	= make_region(min_pnts,{2,3,23,22})
--mask[5] = maxC_L
mask[5].regions[1]	= make_region(maxC_pnts,{1,5,4})
mask[5].regions[2]	= make_region(maxC_pnts,{19,18,5})
mask[5].regions[3]	= make_region(maxC_pnts,{1,19,5})
mask[5].regions[4]	= make_region(maxC_pnts,{1,20,19})
mask[5].regions[5]	= make_region(maxC_pnts,{18,17,16,15,14,8,7,6,5})
mask[5].regions[6]	= make_region(maxC_pnts,{14,13,12,11,10,9,8})
mask[5].regions[7]	= make_region(maxC_pnts,{1,21,20})
mask[5].regions[8]	= make_region(maxC_pnts,{1,22,21})
mask[5].regions[9]	= make_region(maxC_pnts,{1,2,23,22})
mask[5].regions[10]	= make_region(maxC_pnts,{2,24,23})
mask[5].regions[11]	= make_region(maxC_pnts,{2,25,24})
mask[5].regions[12]	= make_region(maxC_pnts,{2,26,25})
mask[5].regions[13]	= make_region(maxC_pnts,{2,29,28,27,26})
--mask[6] = maxC_R
mask[6].regions[1]	= make_region(maxC_pnts,{4,5,1},true)
mask[6].regions[2]	= make_region(maxC_pnts,{5,18,19},true)
mask[6].regions[3]	= make_region(maxC_pnts,{1,19,5},true)
mask[6].regions[4]	= make_region(maxC_pnts,{19,20,1},true)
mask[6].regions[5]	= make_region(maxC_pnts,{5,6,7,8,14,15,16,17,18},true)
mask[6].regions[6]	= make_region(maxC_pnts,{8,9,10,11,12,13,14},true)
mask[6].regions[7]	= make_region(maxC_pnts,{20,21,1},true)
mask[6].regions[8]	= make_region(maxC_pnts,{21,22,1},true)
mask[6].regions[9]	= make_region(maxC_pnts,{22,23,2,1},true)
mask[6].regions[10]	= make_region(maxC_pnts,{23,24,2},true)
mask[6].regions[11]	= make_region(maxC_pnts,{24,25,2},true)
mask[6].regions[12]	= make_region(maxC_pnts,{25,26,2},true)
mask[6].regions[13]	= make_region(maxC_pnts,{26,27,28,29,2},true)
--mask[7] = minC_L
mask[7].regions[1]	= make_region(maxC_pnts,{19,30,31,32,33,34,35,36,37,38,39,40,41,42})
mask[7].regions[2]	= make_region(maxC_pnts,{1,20,19,42})
mask[7].regions[3]	= mask[5].regions[7]
mask[7].regions[4]	= mask[5].regions[8]
mask[7].regions[5]	= mask[5].regions[9]
mask[7].regions[6]	= mask[5].regions[10]
mask[7].regions[7]	= mask[5].regions[11]
mask[7].regions[8]	= mask[5].regions[12]
mask[7].regions[9]	= mask[5].regions[13]
--mask[8] = minC_R
mask[8].regions[1]	= make_region(maxC_pnts,{42,41,40,39,38,37,36,35,34,33,32,31,30,19},true)
mask[8].regions[2]	= make_region(maxC_pnts,{42,19,20,1},true)
mask[8].regions[3]	= mask[6].regions[7]
mask[8].regions[4]	= mask[6].regions[8]
mask[8].regions[5]	= mask[6].regions[9]
mask[8].regions[6]	= mask[6].regions[10]
mask[8].regions[7]	= mask[6].regions[11]
mask[8].regions[8]	= mask[6].regions[12]
mask[8].regions[9]	= mask[6].regions[13]

function post_initialize()
	-- masks
	for k,v in pairs(mask[1].regions) do
		TGP:add_masked_region(v,false,0)
	end
	for k,v in pairs(mask[2].regions) do
		TGP:add_masked_region(v,false,1)
	end
	for k,v in pairs(mask[3].regions) do
		TGP:add_masked_region(v,false,2)
	end
	for k,v in pairs(mask[4].regions) do
		TGP:add_masked_region(v,false,3)
	end
	for k,v in pairs(mask[5].regions) do
		TGP:add_masked_region(v,false,4)
	end
	for k,v in pairs(mask[6].regions) do
		TGP:add_masked_region(v,false,5)
	end
	for k,v in pairs(mask[7].regions) do
		TGP:add_masked_region(v,false,6)
	end
	for k,v in pairs(mask[8].regions) do
		TGP:add_masked_region(v,false,7)
	end
end

--
local gettext = require("i_18n")
_ = gettext.translate

TGP_CHEEK_DESTROYED = 0
TGP_CENTER_DESTROYED = 1

Damage = {	{Failure = TGP_CHEEK_DESTROYED,	 Failure_name = "TGP_CHEEK_DESTROYED",	Failure_editor_name = _("TGP destroyed"), Element = 9,	Integrity_Treshold = 0.01, Slope_param = 200},
			{Failure = TGP_CENTER_DESTROYED, Failure_name = "TGP_CENTER_DESTROYED",	Failure_editor_name = _("TGP destroyed"), Element = 82,	Integrity_Treshold = 0.01, Slope_param = 200},
}
