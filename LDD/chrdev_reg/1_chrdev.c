#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/err.h>
 

#define mem_size        1024           //Memory Size
 
dev_t dev = 0;
static struct class *dev_class;
static struct cdev my_cdev;
uint8_t *kernel_buffer;

/*
** Function Prototypes
*/
static int      __init etx_driver_init(void);
static void     __exit etx_driver_exit(void);
static int      my_open(struct inode *inode, struct file *file);
static int      my_release(struct inode *inode, struct file *file);
static ssize_t  my_read(struct file *filp, char __user *buf, size_t len,loff_t * off);
static ssize_t  my_write(struct file *filp, const char *buf, size_t len, loff_t * off);


/*
** File Operations structure
*/
static struct file_operations fops =
{
        .owner          = THIS_MODULE,
        .read           = my_read,
        .write          = my_write,
        .open           = my_open,
        .release        = my_release,
};
 
/*
** This function will be called when we open the Device file
*/
static int my_open(struct inode *inode, struct file *file)
{
        printk("Device File Opened...!!!\n");
        return 0;
}

/*
** This function will be called when we close the Device file
*/
static int my_release(struct inode *inode, struct file *file)
{
        printk("Device File Closed...!!!\n");
        return 0;
}

/*
** This function will be called when we read the Device file
*/
static ssize_t my_read(struct file *filp, char __user *buf, size_t len, loff_t *off)
{
        //Copy the data from the kernel space to the user-space
        printk("Read fun  Done!\n");
        return 0;
}

/*
** This function will be called when we write the Device file
*/
static ssize_t my_write(struct file *filp, const char __user *buf, size_t len, loff_t *off)
{
        printk("Write fun Done!\n");   
	printk("Receieved string in write is :%s\n",buf);
        return 0;
}

/*
** Module Init function
*/
static int __init etx_driver_init(void)
{
        printk("Driver is inserted..===\n");
	alloc_chrdev_region(&dev, 0, 1, "My_driver");
        cdev_init(&my_cdev,&fops);
        cdev_add(&my_cdev,dev,1);
        dev_class = class_create(THIS_MODULE,"my_class");
        device_create(dev_class,NULL,dev,NULL,"my_device");
	return 0;
}

static void __exit etx_driver_exit(void)
{
        device_destroy(dev_class,dev);
        class_destroy(dev_class);
        cdev_del(&my_cdev);
        unregister_chrdev_region(dev, 1);
        pr_info("Device Driver Remove...Done!!!\n");
}
 
module_init(etx_driver_init);
module_exit(etx_driver_exit);
 
MODULE_LICENSE("GPL");
MODULE_AUTHOR("GUDRU_RAJU");
MODULE_DESCRIPTION("Linux device driver");
