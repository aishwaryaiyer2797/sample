obj-m = stick_driver.o

KERNEL_DIR=/lib/modules/$(shell uname -r)/build
PWD=$(shell pwd)
all:
	$(MAKE) -C $(KERNEL_DIR) SUBDIRS=$(PWD)
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
