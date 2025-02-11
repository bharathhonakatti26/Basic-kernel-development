#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Proxy");
MODULE_DESCRIPTION("A Simple Kernel Model");
MODULE_VERSION("1.1");

static int hello_init(void){
printk("\n\nSaying Hello from Proxy_021 ... \n\n");
return 0;
}

static void hello_exit(void){
printk("\n\nGood bye ! Finally You Runned Your First kernel!!\n\n");
}

module_init(hello_init);
module_exit(hello_exit);
