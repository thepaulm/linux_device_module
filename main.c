#include <linux/kernel.h>
#include <linux/module.h>

#include "outputs.h"

int init_module() {
	print_init();
	return 0;
}

void cleanup_module() {
	print_exit();
}

MODULE_LICENSE("Proprietary");
