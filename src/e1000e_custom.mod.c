#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0x9a31bb74, "module_layout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x6ab4289b, "netdev_info" },
	{ 0x5cd9dbb5, "kmalloc_caches" },
	{ 0x914f8347, "pci_bus_read_config_byte" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9ff10560, "ethtool_op_get_ts_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4dc87, "timecounter_init" },
	{ 0xf6e39705, "__pm_runtime_idle" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xadaabe1b, "pv_lock_ops" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x754d539c, "strlen" },
	{ 0x7170092f, "skb_pad" },
	{ 0xb3be75f6, "dev_set_drvdata" },
	{ 0xe7ae0ca3, "dma_set_mask" },
	{ 0x6f645808, "node_data" },
	{ 0x7a119bc8, "napi_complete" },
	{ 0x86db9a2d, "pci_disable_device" },
	{ 0xc0b33b22, "pci_disable_msix" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x68b3dcbc, "netif_carrier_on" },
	{ 0xacd991bf, "pm_qos_add_request" },
	{ 0xe6caccdd, "pm_qos_remove_request" },
	{ 0x29aaae17, "schedule_work" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xd54f2103, "netif_carrier_off" },
	{ 0x88bfa7e, "cancel_work_sync" },
	{ 0x6efb8d26, "x86_dma_fallback_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x593a99b, "init_timer_key" },
	{ 0x37013607, "mutex_unlock" },
	{ 0xd0a6101e, "__pm_runtime_resume" },
	{ 0x999e8297, "vfree" },
	{ 0x52690e71, "pci_bus_write_config_word" },
	{ 0x2447533c, "ktime_get_real" },
	{ 0xabd25043, "pci_disable_link_state_locked" },
	{ 0xa0e6fa2f, "__alloc_pages_nodemask" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6c9f714d, "skb_trim" },
	{ 0x7a00547, "__netdev_alloc_skb" },
	{ 0x27c33efe, "csum_ipv6_magic" },
	{ 0xd504c5c1, "__pskb_pull_tail" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xd9acbbd9, "pci_set_master" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x756c2b53, "pci_enable_pcie_error_reporting" },
	{ 0x7be51c40, "pci_enable_msix" },
	{ 0x8c196454, "pci_restore_state" },
	{ 0xfee0571a, "dev_err" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xce1c9a3e, "ethtool_op_get_link" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xc3fb7d5d, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe85f172e, "register_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x444f6a35, "__pci_enable_wake" },
	{ 0x7da7be30, "mutex_lock" },
	{ 0x802d0e93, "crc32_le" },
	{ 0x7a1e570e, "dev_close" },
	{ 0x8834396c, "mod_timer" },
	{ 0xfd409aea, "netif_napi_add" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xcddc027, "device_wakeup_enable" },
	{ 0xafd06f3b, "dev_kfree_skb_any" },
	{ 0x3fd49446, "pci_clear_master" },
	{ 0xf28b592f, "dev_open" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7d330128, "pci_find_capability" },
	{ 0xad436042, "dev_notice" },
	{ 0xe67bab80, "dev_kfree_skb_irq" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x9199ec77, "pci_select_bars" },
	{ 0xc0bf6ead, "timecounter_cyc2time" },
	{ 0x235b5424, "netif_device_attach" },
	{ 0xfe0bcea4, "napi_gro_receive" },
	{ 0xb529515a, "_dev_info" },
	{ 0x7cea2c1b, "kmem_cache_alloc_node_trace" },
	{ 0x618911fc, "numa_node" },
	{ 0x504c73e9, "netif_device_detach" },
	{ 0x28ce48ff, "__alloc_skb" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0x48270566, "pci_bus_read_config_word" },
	{ 0x36c05e32, "__napi_schedule" },
	{ 0xa8c91e97, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa611ef3a, "pm_schedule_suspend" },
	{ 0x87ce1f99, "eth_type_trans" },
	{ 0xbdcb0540, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a05a52f, "netdev_err" },
	{ 0xf55bb238, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x61fb248a, "node_states" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xf0234c44, "netdev_warn" },
	{ 0xd44e9ac4, "eth_validate_addr" },
	{ 0x63479d3e, "pci_disable_pcie_error_reporting" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x44713ff6, "___pskb_trim" },
	{ 0x4845c423, "param_array_ops" },
	{ 0x17e6fdf7, "pci_disable_msi" },
	{ 0x2eb84610, "dma_supported" },
	{ 0xedc03953, "iounmap" },
	{ 0xb9e21fac, "pci_prepare_to_sleep" },
	{ 0x79496b16, "pci_dev_run_wake" },
	{ 0xaba33759, "__pci_register_driver" },
	{ 0x25eb73b5, "pm_qos_update_request" },
	{ 0xa084f53f, "put_page" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x3c7d99b6, "dev_warn" },
	{ 0xd9d35cd9, "unregister_netdev" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0x28318305, "snprintf" },
	{ 0x8a6c7bfe, "pci_enable_msi_block" },
	{ 0xd20f7b8c, "__netif_schedule" },
	{ 0xd90a5a99, "consume_skb" },
	{ 0x4e17caa2, "pci_enable_device_mem" },
	{ 0x235b9b4e, "skb_tstamp_tx" },
	{ 0x11f2fca, "skb_put" },
	{ 0x738b4d59, "pci_release_selected_regions" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x10519fe3, "dev_get_drvdata" },
	{ 0x542f7965, "pcie_capability_write_word" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xc6849b4a, "dma_ops" },
	{ 0x568ec924, "pci_request_selected_regions_exclusive" },
	{ 0x29b8d2a8, "pcie_capability_read_word" },
	{ 0xdca2d5ad, "device_set_wakeup_enable" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xa10019d8, "pci_save_state" },
	{ 0xdcfe4431, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d0000105Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000105Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000109Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001049sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001501sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000294Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001525sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001503sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000155Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001559sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A3sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6BFFB749707E9A28C0C7785");
