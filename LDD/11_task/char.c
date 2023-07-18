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
char nbuff[20];
int n=0,i=0;
loff_t o=0;
static int      my_open(struct inode *inode, struct file *file);
static int      my_release(struct inode *inode, struct file *file);
static ssize_t  my_read(struct file *filp, char __user *buf, size_t len,loff_t * off);
static ssize_t  my_write(struct file *filp, const char *buf, size_t len, loff_t * off);
static loff_t  my_llseek (struct file *, loff_t, int);
void myfun(void);
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
	printk("valu of off in read:%lld",n);
	copy_to_user(buf,kbuff,31);
	printk("Receieved string in read is :%s\n",buf);
	i=0;
        return 0;
}


static ssize_t my_write(struct file *filp, const char __user *buf, size_t len, loff_t *off)
{
        printk("Write fun Done!\n");
	copy_from_user(kbuff+*off,buf,len);
	if(i!=0)
	n+=len;
	printk("Copied into kernel buffer=%s\n",kbuff);  
	return 0;
}
void myfun(void)
{	
	printk("Entered into myfun\n"); 
	printk("Value of len=%d",o);
	while(kbuff[o]!=0)
	{
	nbuff[i]=kbuff[o];
	o++;
	i++;
	}
	printk("Copied in nbuff in lseek fun call :%s\n",nbuff);
}

loff_t my_llseek(struct file *file, loff_t l, int a)
{
	loff_t offset=0;
	printk("lseek done\n");
	offset=l;
	o=l;
	n=l;
	myfun();
	file->f_pos=offset;
	//printk("valu o in lseek=%d",o);
	return offset;
}

static int __init driver_initt(void)
{
        printk("Driver is inserted..===\n");
	alloc_chrdev_region(&dev, 0, 1, "My_driver");
	printk("Major=%d  Minor=%d\n",MAJOR(dev),MINOR(dev));
        cdev_init(&my_cdev,&fops);
        cdev_add(&my_cdev,dev,1);
        dev_class = class_create(THIS_MODULE,"my_class");
        device_create(dev_class,NULL,dev,NULL,"My_driver");
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
