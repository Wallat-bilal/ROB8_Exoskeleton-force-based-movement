def logParsing(log): #Opens logfiles, removes date and splits it into a list [[hipForce, kneeForce, hipMotorAngle, kneeMotorAngle]]
    f = open(log)
    f = f.readlines()
    stripped = []
    prevTemp = [0,0,0,0]
    for line in f:
        temp = line[24:].replace("\n","").split(",")
        if float(temp[-1]) == 0 and float(temp[-2]) == 0:
            if temp[-1] != prevTemp[-1] and temp[-2] != prevTemp[-2]:
                stripped.append(temp)
        else:
            stripped.append(temp)
        prevTemp = temp
    return stripped
    
if __name__ =="__main__":
    logParsing("Test1_m17.log")