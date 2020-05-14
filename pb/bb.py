f = open("aaa.txt","r")
fw = open("bbb.txt","w")

Lines = f.readlines()

count=1
for line in Lines:
    ss=""
    xr = line.strip()
    
    xb ='v'+xr[1:]
    ss = "{}      {}={};\n".format(xr,xb,count)
    #print(count,line.strip())
    print(ss)
    fw.write(ss)
    count+=1
