-- окно с картой
local base = _G

module('AwacsMapDialog')

mtab = {__index = _M}	

local Factory   = base.require('Factory')					
local require	= base.require
local pairs		= base.pairs
local table = base.table
local string = base.string
local ipairs	= base.ipairs
local print		= base.print
local math		= base.math
local type		= base.type
local tostring	= base.tostring
local tonumber  = base.tonumber
local loadfile	= base.loadfile
local setmetatable = base.setmetatable
local Window = base.require('Window')
local loader = base.require('DialogLoader')

print('AwacsMapDialog required')

function new()
	return Factory.create(_M)
end

function construct(self)
	print('AwacsMapDialog.construct()')
    self.window_ = loader.spawnDialogFromFile("Scripts/UI/F10View/AwacsMapDialog.dlg")
--	print('window_= ', self.window_)
end

function kill(self)
	if self.window_ then
		self.window_:kill()
		self.window_ = nil
	end
end

function setVisible(self, vis)
	if self.window_ then	
		self.window_:setVisible(vis)
	end
end

function setSurfaceId(self, surfId)
	if self.window_ then
		self.window_:setSurfaceId(surfId)
	end
end

function setDrawToTarget(self, draw)
	if self.window_ then	
		self.window_:setDrawToTarget(draw)
	end
end

function getVisible(self)
	if self.window_ then
		return self.window_:getVisible()
	end
	return false
end

function getWindow(self)
	if self.window_ then
		return self.window_.widget
	end
	return nil
end

function update(self)

end
