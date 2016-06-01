print("package.path = " .. package.path)
local path = ...
print("current path = " .. path)
path = string.sub(path,0,string.len(path)-12)
print("after path = " .. path)

package.path = path .. "cocos/;" .. package.path ..  path

print("after package path = " .. package.path)