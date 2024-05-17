# from epos import eposClass_test as eposClass
from epos import eposClass_test as eposClass
# from epos import DataPlotter
from time import sleep
epos1 = eposClass.epos("USB0", 1)
epos1.close()