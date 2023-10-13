#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/err.h>
#include <linux/uaccess.h>
#include <linux/ioctl.h>
#include "header.h" 
dev_t dev = 0;
#define Max length 
static struct class *dev_class;
static struct cdev my_cdev;
int length=100;
char *kbuff;
static int      my_open(struct inode *inode, struct file *file);
static int      my_release(struct inode *inode, struct file *file);
static ssize_t  my_read(struct file *filp, char __user *buf, size_t len,loff_t * off);
static ssize_t  my_write(struct file *filp, const char *buf, size_t len, loff_t * off);
static long my_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
static struct file_operations fops =
{
        .owner          = THIS_MODULE,
        .read           = my_read,
        .write          = my_write,
        .open           = my_open,
        .release        = my_release,
	.unlocked_ioctl = my_ioctl,
};

 
static int my_open(struct inode *inode, struct file *file)
{
        printk("Device File Opened.\n");
        return 0;
}



static int my_release(struct inode *inode, struct file *file)
{
        printk("Device File Closed...\n");
        return 0;
}

static ssize_t my_read(struct file *filp, char __user *buf, size_t len, loff_t *off)
{
        return 0;
}


static ssize_t my_write(struct file *filp, const char __user *buf, size_t len, loff_t *off)
{
        printk("Write fun Done!\n");
        return 0;
}

static int __init driver_initt(void)
{
        printk("Driver is inserted..===\n");
	alloc_chrdev_region(&dev, 0, 1, "My_driver2");
	printk("Major=%d  Minor=%d\n",MAJOR(dev),MINOR(dev));
        cdev_init(&my_cdev,&fops);
        cdev_add(&my_cdev,dev,1);
        dev_class = class_create(THIS_MODULE,"my_class");
        device_create(dev_class,NULL,dev,NULL,"My_driver2");
	return 0;
}
static long my_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
{
	int i=0;
	//printk("arg::%c\n",arg);
	unsigned long v=17218;
	char *newbuff;
	printk("v::%ld\n",sizeof(v));
//	printk("v::%c\n",(char)v);
	int size;
        switch(cmd) 
	{
                case AUDIO_MM_PLAY:
					copy_from_user((char*)&v,(char *)arg,sizeof(v));
					//printk("arg::%c\n",arg);
					//printk("v::%ld\n",arg);
					//printk("v::%s\n",(char*)&v);
					for(;i<Max;i++)
					{
						kbuff[i]=v;
					}
					printk("Kernel Buffer of 100 char:%s",kbuff);
					    break;
                case AUDIO_MM_RECORD:
					copy_to_user((char*)arg,kbuff,20);					
                        break;
		case AUDIO_MM_NEXT:
					//copy_from_user((int *)&size,(int*)arg,sizeof(size));	
					//printk("size=%d",size);				
					
					printk("arg=%d",arg);				
					Max=arg;
					printk("v::%ld\n",v);
				
				
				break;
		case AUDIO_MM_PREV:


				break;
                default:
                        printk("Default\n");
                        break;
        }
        return 0;
}


static void __exit driver_exit(void)
{
        device_destroy(dev_class,dev);
        class_destroy(dev_class);
        cdev_del(&my_cdev);
        unregister_chrdev_region(dev, 1);
        pr_info("Device Driver Remove...Done!!!\n");
}
 
module_init(driver_initt);
module_exit(driver_exit);
 
MODULE_LICENSE("GPL");
MODULE_AUTHOR("GUDRU_RAJU");
MODULE_DESCRIPTION("Linux device driver");

