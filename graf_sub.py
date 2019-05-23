import numpy as np
import matplotlib.pyplot as plt

da=np.loadtxt("dat_sub.dat")
x,y=da[:,1],da[:,2]

plt.figure()
plt.plot(x,y)
plt.xlabel("x")
plt.ylabel("y")
plt.savefig("delaCruzSamir_final_16.png")