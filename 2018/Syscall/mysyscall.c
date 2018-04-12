#include <linux/kernel.h> 
#include <linux/syscalls.h>

asmlinkage void sys_mysyscall(char* msg)
{
  printk("%s\n", msg);
}
