import os
import sys
import hashlib

pf = file("config","w+")

def work(path):
    global pf
    l = os.listdir(path)
    for f in l:
        if os.path.isdir(os.path.join(path,f)):
            work(os.path.join(path,f))
        else:
            s = open(os.path.join(path,f)).read()
            m = hashlib.md5()
            m.update(s)
            full_path = os.path.join(path,f)
            print full_path + " = " + str(m.hexdigest())
            c = full_path + " = " + str(m.hexdigest()) + "\n"
            pf.write(c)

work(os.path.curdir)

pf.close()