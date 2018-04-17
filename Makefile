obj-m += sensor_module.o

all:
	make -C /home/holst/r-pi-linux/linux M=$(PWD) modules 

clean:
	make -C /home/holst/r-pi-linux/linux/ M=$(PWD) clean 
# M is a variable containing the current path.
# C is the directory that is changes to before building the modules. In this
# case the build sources for the rpi kernel. 
# The M content will be passed to the top level makefile, and it will move to
# the path in M to buld the modules. 
#https://stackoverflow.com/questions/20301591/m-option-in-make-command-makefile
#from main makefile:
# Use make M=dir to specify directory of external module to build
# Old syntax make ... SUBDIRS=$PWD is still supported
# Setting the environment variable KBUILD_EXTMOD take precedence

