#coding:utf-8
import os
import sys

new_path = "deal"
#luajit -b [脚本名] [编译后的脚本名]，
def work(path):
    global new_path
    print("work  path = " + path)
    l = os.listdir(path)
    for f in l:
        if os.path.isdir(os.path.join(path,f)):
            full_path = os.path.join(path, f)
            deal_index = full_path.find("\\")
            deal_full_path = full_path[deal_index:]
            new_full_path = new_path + deal_full_path
            if os.path.exists(new_full_path) == False :
                print "new_full_path = " ,new_full_path
                os.mkdir(new_full_path)
            work(os.path.join(path,f))
        else:
            #处理lua文件
            full_path = os.path.join(path, f)
            deal_index = full_path.find("\\")
            deal_full_path = full_path[deal_index:]
            print "new_path = " ,new_path
            print "deal_full_path = " , deal_full_path
            new_full_path = new_path + deal_full_path
            index = full_path.rfind(".")
            suffix = full_path[index:]
            if cmp(suffix,".lua") == 0:
                print("lua file full_path = " , full_path)
                cmd = "luajit.exe -b " + full_path + " .\\" + new_full_path
                print("cmd = " + cmd)
                os.system(cmd)

if os.path.exists(new_path) == False:
    os.mkdir(new_path)

if os.path.exists(new_path + "\\lua") == False:
    os.mkdir(new_path + "\\lua")

work(os.path.curdir + "\\lua")


