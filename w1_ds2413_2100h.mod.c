#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x367398b6, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xbfcbc092, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0xe42d02a2, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x49efcaf3, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x233350f8, __VMLINUX_SYMBOL_STR(w1_reset_resume_command) },
	{ 0xd6c26329, __VMLINUX_SYMBOL_STR(w1_read_8) },
	{ 0x270c7b9b, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0xbfccce18, __VMLINUX_SYMBOL_STR(w1_reset_select_slave) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "E6840CBC9AC1ECDDAA5B2F4");
