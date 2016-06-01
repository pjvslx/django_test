cclog = function(...)
    print(string.format(...))
end

-- for CCLuaEngine traceback
function __G__TRACKBACK__(msg)
    cclog("----------------------------------------")
    cclog("LUA ERROR: " .. tostring(msg) .. "\n")
    cclog(debug.traceback())
    cclog("----------------------------------------")
    return msg
end

local function main()
    collectgarbage("collect")
    -- avoid memory leak
    collectgarbage("setpause", 100)
    collectgarbage("setstepmul", 5000)

    -- initialize director
    local director = cc.Director:getInstance()
    local visibleSize = cc.Director:getInstance():getVisibleSize()
    local origin = cc.Director:getInstance():getVisibleOrigin()

    local layer = cc.Layer:create()

    local touchBeginPoint = nil
    local function onTouchBegan(touch, event)
        local location = touch:getLocation()
        cclog("onTouchBegan: %0.2f, %0.2f", location.x, location.y)
        touchBeginPoint = {x = location.x, y = location.y}
        return true
    end

    local function onTouchMoved(touch, event)
        local location = touch:getLocation()
        cclog("onTouchMoved: %0.2f, %0.2f", location.x, location.y)
    end

    local function onTouchEnded(touch, event)
        local location = touch:getLocation()
        cclog("onTouchEnded: %0.2f, %0.2f", location.x, location.y)
        touchBeginPoint = nil
    end

    local listener = cc.EventListenerTouchOneByOne:create()
    listener:registerScriptHandler(onTouchBegan,cc.Handler.EVENT_TOUCH_BEGAN )
    listener:registerScriptHandler(onTouchMoved,cc.Handler.EVENT_TOUCH_MOVED )
    listener:registerScriptHandler(onTouchEnded,cc.Handler.EVENT_TOUCH_ENDED )
    local eventDispatcher = layer:getEventDispatcher()
    eventDispatcher:addEventListenerWithSceneGraphPriority(listener, layer)

    local label = ccui.Text:create()
    label:setString("my first scene for lua")
    label:setFontSize(100)
    label:setPosition(cc.p(visibleSize.width/2,visibleSize.height/2 + 280))
    layer:addChild(label)

    local delay = cc.DelayTime:create(0.01)
    local func = function()
--        local lottery = Lottery:getInstance()
--        lottery:showRuleView()
    end
    local call = cc.CallFunc:create(func)
    layer:runAction(cc.Sequence:create(delay,call))
    layer:setLocalZOrder(1000)
    cc.Director:getInstance():getRunningScene():addChild(layer)
    print("--------------lua scene")
    local cm = ComponentManager:instance()
    local network = cm:getComponent("network")
    network = tolua.cast(network,"Network")
    local lua_packet = LuaNetPacket:createLuaNetPacket()
    network:sendPacket(lua_packet,3300)
    print("cm = " .. tostring(cm))
    print("network = " .. tostring(network))

end


local status, msg = xpcall(main, __G__TRACKBACK__)
if not status then
    error(msg)
end
