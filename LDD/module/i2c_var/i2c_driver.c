#include <linux/init.h>
#include <linux/module.h>
#include<linux/kernel.h>
int global=10;
EXPORT_SYMBOL(global);
void writefun(void)
{
//	int local=20;
//	EXPORT_SYMBOL(local);
	printk("Fun is called by i2c_driver_dependency\n");
}
EXPORT_SYMBOL(writefun);

static int i_driver_start(void)
{
    	printk("Driver has started by Raju\n");
    	return 0;
}

static void i_driver_exit(void)
{
    	printk("Exiting the Driver which has started by Raju\n");
}

module_init(i_driver_start);
module_exit(i_driver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("GUDURU RAJU");

