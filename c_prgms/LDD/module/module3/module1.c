#include <linux/init.h>
#include <linux/module.h>


static int driver_start(void)
{
	float a=20.567;
    	printk( "Driver has started by Raju\n");
    	printk( "float value is =%d\n",a);
    	return 0;
}

static void driver_exit(void)
{
    printk( "Exiting the Driver which has started by Raju\n");
}

module_init(driver_start);
module_exit(driver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("GUDURU RAJU");

