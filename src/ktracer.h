#ifndef __KTRACER_H__
#define __KTRACER_H__		1

#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/miscdevice.h>
#include <linux/cdev.h>
#include <linux/sched.h>
#include <linux/wait.h>
#include <asm/ioctl.h>
#include <asm/uaccess.h>
#include "tr_ioctl.h"

#define BUFFER_SIZE		256

#define LOG_LEVEL	KERN_ALERT

#define TRACER_MAJOR		10
#define TRACER_MINOR		42
#define NUM_MINORS			1
#define MODULE_NAME			"tracer"

#ifndef BUFSIZ
#define BUFSIZ		4096
#endif



#endif