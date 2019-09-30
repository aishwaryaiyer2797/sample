#include<linux/module.h>
#include<linux/kernel.h.>
#include<linux/init.h>

MODULE_LICENSE("GPL");

MODULE_AUTHOR("AISHWARYA");

MODULE_DESCRIPTION("A simple Hello world LKM!");

MODULE_VERSION("0.1");

static int __init hello_start(void)
{
	printk(KERN_INFO "Loading Module 1...\n");
	printk(KERN_INFO "Hello\n");
	return 0;
}
static void __exit hello_end(void) 
{ 
    printk(KERN_INFO "Goodbye Ms. Aishwarya\n"); 
} 
  
module_init(hello_start); 
module_exit(hello_end);
