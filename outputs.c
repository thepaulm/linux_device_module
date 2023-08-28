#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/printk.h>

void print_init(void) {
	pr_info("Module loaded.\n");
}

void print_exit(void) {
	pr_info("Module unloaded.\n");
}

MODULE_LICENSE("Proprietary");
