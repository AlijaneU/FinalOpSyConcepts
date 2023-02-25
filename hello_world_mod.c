#include<linux/module.h>
#include<linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alijane");
MODULE_DESCRIPTION("hello world module");
MODULE_VERSION("0.01");

static int __init hello_mod_init(void)
{
        printk(KERN_ALERT "Hello world ! \n");
        return 0;
}

static void __exit hello_mod_exit(void)
{
        printk(KERN_ALERT "Bye world !\n");
}

module_init(hello_mod_init);
module_exit(hello_mod_exit);
