local sceneEnvironment = require('demosceneEnvironment')
enc =
{
    objectHeight = 30, --высота объекта, вокруг которого крутим камеру

    cameraSpeed  = 0.25,
    cameraFov	 = 60,
    cameraAngVDefault = math.rad(25),
    cameraDistance = 50,
    cameraDistMult = 0,

    cameraAngH	 = 0,
    cameraAngV	 = 0,
    cameraRadius = 0,
    cameraHeight = 0,
	cameraShiftX = 10,
	cameraShiwtY = 0,
    camAng = 0,
    camDist = 0,
    camTime = 0,
    mouseSensitivity = 0.0034, -- скорость вращения камеры
    wheelSensitivity = 0.02, -- скорость удаления/приближения камеры
	allowFloor		 = true,
	allowRefObj		 = true,
	floorPos		 = 0,
	floorWater 		 = false,

	refObjData		 = 
	{
		x 		= 0,
		z 		= 0,
		heading = 0,
	}
}

local sceneAPI
local animationUpdateFunc

local function updateCamera()
	enc.camAng 			= enc.cameraSpeed*enc.camTime + enc.cameraAngH;
	enc.camDist 		= enc.cameraDistance*math.exp(enc.cameraDistMult)
	enc.cameraHeight 	= math.sin(enc.cameraAngV)*enc.camDist
	enc.cameraRadius 	= math.cos(enc.cameraAngV)*enc.camDist
	enc.cam.transform:setPosition(math.sin(enc.camAng)*enc.cameraRadius, enc.objectHeight + enc.cameraHeight, math.cos(enc.camAng)*enc.cameraRadius)
	enc.cam.transform:lookAtPoint(0, enc.objectHeight, 0)
end

local function updateSceneBase (t, dt)
	updateCamera()
	if  animationUpdateFunc then
		animationUpdateFunc(dt)
	end
end

enc.encyclopediaSceneUpdate = function(t, dt)
	enc.camTime = enc.camTime + dt
	updateSceneBase(t, dt)
end

enc.encyclopediaSceneUpdateNoRotate = function(t, dt)
	updateSceneBase(t, dt)
end

local function clearReferenceObj()
	if  enc.referenceObjStand then 
		sceneAPI.remove(enc.referenceObjStand)
		enc.referenceObjStand = nil
	end
	if  enc.referenceObj then 
		sceneAPI.remove(enc.referenceObj)
		enc.referenceObj = nil
	end
end

local function clearFloor()
	if  enc.floor then 
		sceneAPI.remove(enc.floor)
		enc.floor = nil
	end
	clearReferenceObj()
end

enc.updateFloor = function()
	if enc.floorPos == nil or not enc.allowFloor then
		clearFloor()
		return
	end
	if  enc.floor and enc.floor.isWater ~= enc.floorIsWater then
		if  enc.floor then 
			sceneAPI.remove(enc.floor)
			enc.floor = nil
		end
	end
	if  not enc.floor  then 
		if  enc.floorIsWater then 
			enc.floor 	     =  sceneAPI:addModel("flat_water")
		else
			enc.floor 	     =  sceneAPI:addModel("flat_earth")
		end
		enc.floor.isWater 	 = 	enc.floorIsWater
	end
	enc.floor.transform:setPosition(0,enc.floorPos,0)
	enc.floor.transform:setOrient  (0,0,0) 		-- this will just  mark  position to  recalculate 

	if enc.allowRefObj then
		if 	not enc.referenceObj then
			enc.referenceObj = sceneAPI:addModel("carrier_lso1_usa", 0,0,0)
		end
		enc.referenceObj.transform:setPosition(enc.refObjData.x,enc.floorPos,enc.refObjData.z)
		enc.referenceObj.transform:setOrient  (0,enc.refObjData.heading,0)
		
		if enc.floorIsWater then 
			if not enc.referenceObjStand then 
				enc.referenceObjStand = sceneAPI:addModel("463_Pallet")
				enc.referenceObjStand:attachTo(enc.referenceObj)
			end
		elseif  enc.referenceObjStand then 
			sceneAPI.remove(enc.referenceObjStand)
			enc.referenceObjStand = nil
		end	
	else
		clearReferenceObj()
	end
end

enc.onChangeModel = function(model,category)
	if not model or not model.valid then
		enc.floorPos 			= nil
	else
		enc.allowRefObj 		= true
		local x,y,z 			= model.transform:getPositionWorld()
		local x0,y0,z0,x1,y1,z1 = model:getBBox()
		local refy = 0
		local refx = x1 + 0.5
		local refz = z1 + 0.5
		if category then
			if category == 'Plane'  or category  == 'Helicopter' then 
				refy  = y0
				refx  = x1 - 1
				if category  == 'Plane' then 
					refz  = z1 - 2
				end
			elseif  category == 'Weapon' then
				refy  = y0
			elseif  category == 'Personnel' then 
				enc.allowRefObj = false
			end
		end
		enc.floorIsWater		= category and category == 'Ship'
		enc.floorPos			= y + refy
		enc.refObjData.x 		= x + refx
		enc.refObjData.z 		= z + refz
		enc.refObjData.heading  = 180 - 57.3 * math.atan2(refz,refx) -- orient to object
	end
	enc.updateFloor()
end

enc.setAnimationUpdateFunc = function(func)
	animationUpdateFunc = func
end

function loadScene(scenePtr)
    sceneAPI = sceneEnvironment.getInterface(scenePtr)
    sceneAPI:setSky(true)
	sceneAPI:setEnvironmentMap("Nevada01")
    enc.cam = sceneAPI:addCamera(0, 0, 0)
    enc.cam:setNearClip(0.05)
    enc.cam:setFarClip(10000)
end

