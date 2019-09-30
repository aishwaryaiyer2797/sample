#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/moduleparam.h>

int param_var[3]={0,0,0};


module_param_array(param_var,int,NULL, S_IRUSR | S_IWUSR);


void display(void){
	printk(KERN_ALERT "TEST param:%d",param_var[0]);
	printk(KERN_ALERT "TEST param:%d",param_var[1]);
	printk(KERN_ALERT "TEST param:%d",param_var[2]);
}

static int __init hello_start(void)
{
	printk(KERN_INFO "Loading Module 1...\n");
	display();
	return 0;
}
static void __exit hello_end(void) 
{ 
    printk(KERN_INFO "Goodbye Ms. ABC\n"); 
} 
  
module_init(hello_start); 
module_exit(hello_end);
