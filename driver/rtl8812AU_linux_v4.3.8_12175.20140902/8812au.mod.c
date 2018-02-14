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
	{ 0x9d35aeec, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x39bb37ea, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x5a82c44a, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xa2a8d62b, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xa2e59924, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x41e15a12, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xa7b38e60, __VMLINUX_SYMBOL_STR(find_vpid) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x7ad6ac18, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x81f030d5, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x4d2946e4, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x4a0c112d, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x6dc0c9dc, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x56d4ca56, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xe92a8028, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb931ebc5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xc70f6260, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xb7b734dc, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x6f45de89, __VMLINUX_SYMBOL_STR(file_path) },
	{ 0x7b40e206, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x347cd1b3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x26c2e913, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6be08290, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x4c56b49a, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x8fe5c1a3, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc8556896, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0xa2d9c767, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xe4ef9c5a, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xd73f15d9, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xb97a8d7, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd58277, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x14b9bd13, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x298f5f9, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xcca0be3c, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x477625f9, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x17d070c2, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xb6b37f56, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xc56e920c, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x6ecd4d99, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0x75e4b898, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa2cec23e, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xfd2ee1ed, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x854fed68, __VMLINUX_SYMBOL_STR(kill_pid) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xb71d108d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe3109190, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x40584674, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x2fc9a0d6, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xc302e500, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x23d33b22, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x2248a9dc, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x2810cbaf, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xc375dec3, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x42d65706, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xc0f333fa, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x2d0643bd, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xc0297d8a, __VMLINUX_SYMBOL_STR(proc_get_parent_data) },
	{ 0x1f26b2e, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x351a4900, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x529c4cc9, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x3317697, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0x715f5ea0, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0x2b626cd6, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xf16d977b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xcd8259a, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xa7dc745e, __VMLINUX_SYMBOL_STR(netif_wake_subqueue) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x26b1b15b, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x66c66f48, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x226c32c1, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x964b0a2f, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x809dd6c4, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0x2da1b27c, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x4a055dfb, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0xca37d94, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0074d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0952d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p016Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0408d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3426d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1058p0632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3316d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "67DA1D4720D58DA55E5D6D2");
