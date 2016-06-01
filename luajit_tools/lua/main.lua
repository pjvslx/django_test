print("inner file main.lua package.path = " .. package.path)
require("lua.cocos.init")
require("lua.socket").regist_script_handler()
