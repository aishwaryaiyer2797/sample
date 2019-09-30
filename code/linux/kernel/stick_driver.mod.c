#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x586ddb5e, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x4c675c78, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x65345383, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v090Cp1000d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "10B8A1CDF78AB9E7F8BB6FD");
