#include <linux/init.h>
#include <linux/module.h>

/* Register definitions */
#define REG_AV_CONF		0x10
#define REG_CTRL_1		0x20
#define REG_T0_degC_x8		0x32
#define REG_T1_degC_x8		0x33
#define REG_T0_T1_MSB		0x35
#define REG_T0_OUT_L		0x3C
#define REG_T0_OUT_H		0x3D
#define REG_T1_OUT_L		0x3E
#define REG_T1_OUT_H		0x3F
#define REG_TEMP_OUT_L		0x2A
#define REG_TEMP_OUT_H		0x2B


static int __init sens_mod_init(void){
	printk(KERN_INFO "sens_mod: staring...");
	//add stuff
	printk(KERN_INFO "sens_mod: staring done...");
	return 0;
}

static void __exit sens_mod_exit(void){
	 printk(KERN_INFO "PIX: stopping...");
	 // stuff to do
	 printk(KERN_INFO "PIX: stopping done.");
}

/* Module init and exit does the same as module_i2c_driver(foo) does. 
 * https://www.kernel.org/doc/Documentation/i2c/writing-clients
 *	-Initializing the driver						*/

module_init(sens_mod_init);
module_exit(sens_mod_exit);

MODULE_LICENSE("GPL I would imagine...");

MODULE_DESCRIPTION("HST221 Temperature Driver - I2C interface only");
