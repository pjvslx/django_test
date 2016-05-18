#coding=utf-8
import os
import sys
import hashlib

pf = file("config","w+")
parent_dir = os.path.pardir
abs_dir = os.path.abspath("./")
index = abs_dir.rfind("\\")
print "abs_dir = " + abs_dir
print "index = " + str(index)
head_dir = abs_dir[index+1:]
print "head_dir = " + head_dir

exclude_file = ["config","md5_tool.py"]

#简单的测试一个字符串的MD5值
def GetStrMd5(src):
    m0=hashlib.md5()
    m0.update(src)
    print m0.hexdigest()
    pass

#大文件的MD5值
def GetFileMd5(filename):
    if not os.path.isfile(filename):
        return
    myhash = hashlib.md5()
    f = file(filename,'rb')
    while True:
        b = f.read(8096)
        if not b :
            break
        myhash.update(b)
    f.close()
    return myhash.hexdigest()

def CalcSha1(filepath):
    with open(filepath,'rb') as f:
        sha1obj = hashlib.sha1()
        sha1obj.update(f.read())
        hash = sha1obj.hexdigest()
        print(hash)
        return hash

def CalcMD5(filepath):
    with open(filepath,'rb') as f:
        md5obj = hashlib.md5()
        md5obj.update(f.read())
        hash = md5obj.hexdigest()
        print(hash)
        return hash


def work(path):
    global pf
    global exclude_file
    l = os.listdir(path)
    for f in l:
        if os.path.isdir(os.path.join(path,f)):
            work(os.path.join(path,f))
        else:
            if f not in exclude_file:
                full_path = os.path.join(path,f)
                c = full_path + "=" + GetFileMd5(os.path.join(path,f)) + "\n"
                cc = c[2:]
                count = cc.count('\\')
                ccc = cc.replace('\\','/',count)
                print ccc
                pf.write(ccc)

work(os.path.curdir)

pf.close()