#include <linux/init.h>
#include <linux/module.h>
extern void writefun(void);
extern int global;
//extern int local;
static int driver_start(void)
{
	printk("I2c Dependency Driver has started by Raju\n");
	writefun();
//	printf("local variable value is :%d\n",local);
    	return 0;
}

static void driver_exit(void)
{	
	printk("Value of Global Varaiable is:%d\n",global);
	printk("Exiting the I2c Dependency Driver which has started by Raju\n");
}

module_init(driver_start);
module_exit(driver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("GUDURU RAJU");
MODULE_DESCRIPTION("I2C Dependency driver");
