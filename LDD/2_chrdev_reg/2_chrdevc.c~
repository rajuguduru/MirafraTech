#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/err.h>
#include <linux/uaccess.h>

 
dev_t dev = 0;
static struct class *dev_class;
static struct cdev my_cdev;
char kbuff[100];

static int      my_open(struct inode *inode, struct file *file);
static int      my_release(struct inode *inode, struct file *file);
static ssize_t  my_read(struct file *filp, char __user *buf, size_t len,loff_t * off);
static ssize_t  my_write(struct file *filp, const char *buf, size_t len, loff_t * off);
static loff_t  my_llseek (struct file *, loff_t, int);
static struct file_operations fops =
{
        .owner          = THIS_MODULE,
        .read           = my_read,
        .write          = my_write,
        .open           = my_open,
        .release        = my_release,
	.llseek		= my_llseek,
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
	copy_to_user(buf,kbuff+*off,len); 
/*	int i=0,j=0;
        printk("Read fun done \n");
	for(i=0;i<=len;i++)
	{
		buf[j++]=kbuff[i+(*off)];	
		
	}
	buf[j]='\0';
	//printk("Receieved string in read is :%s\n",buf);
*/
        return 0;
}


static ssize_t my_write(struct file *filp, const char __user *buf, size_t len, loff_t *off)
{
        printk("Write fun Done!\n");
	copy_from_user(kbuff,buf,len); 
//	kbuff=(char *)buf;
	printk("Copied into kernel buffer=%s\n",kbuff);  
        return 0;
}

loff_t my_llseek(struct file *file, loff_t l, int a)
{
	loff_t offset=0;
	printk("lseek done\n");
	offset=l;
	file->f_pos=offset;
	return offset;
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
