#ifndef _HI_GLOBAL_MEM_MAP_INCLUDE_H_
#define _HI_GLOBAL_MEM_MAP_INCLUDE_H_ 
#define HISI_RESERVED_FASTBOOT_PHYMEM_BASE 0x16800000
#define HISI_RESERVED_FASTBOOT_PHYMEM_SIZE (0x600000)
#define HISI_RESERVED_FASTBOOT_PHYMEM_PLUSHEAP_SIZE (0x2000000)
#define HISI_RESERVED_FASTBOOT_DTB_PHYMEM_BASE (HISI_RESERVED_FASTBOOT_PHYMEM_BASE + HISI_RESERVED_FASTBOOT_PHYMEM_SIZE)
#define HISI_RESERVED_FASTBOOT_DTB_PHYMEM_SIZE (0x400000)
#define HISI_RESERVED_FASTBOOT_AVB_HEAP_PHYMEM_BASE 0x40000000
#define HISI_RESERVED_FASTBOOT_AVB_HEAP_PHYMEM_SIZE (0x50000000 - 0x40000000)
#ifdef CONFIG_HISI_FAMA
#define HISI_RESERVED_FASTBOOT_CMA_PHYMEM_BASE (0x16800000)
#define HISI_RESERVED_FASTBOOT_CMA_PHYMEM_SIZE (0x5C00000)
#else
#define HISI_RESERVED_FASTBOOT_CMA_PHYMEM_BASE (0x16800000)
#define HISI_RESERVED_FASTBOOT_CMA_PHYMEM_SIZE (0x5C00000)
#endif
#define HISI_RESERVED_DTB_PHYMEM_BASE 0x07A00000
#define HISI_RESERVED_DTB_PHYMEM_SIZE (0x07C00000 - 0x07A00000)
#define HISI_RESERVED_BOOT_CAN_RUN_BASE 0
#define HISI_RESERVED_BOOT_CAN_RUN_END 0xDC00000
#ifdef CONFIG_HISI_FAMA
#define HISI_RESERVED_MODEM_HARQ_PHYMEM_BASE 0x13000000
#define HISI_RESERVED_MODEM_HARQ_PHYMEM_BASE_FAMA 0x13000000
#define HISI_RESERVED_MODEM_HARQ_PHYMEM_SIZE (0x800000)
#endif
#define HISI_RESERVED_SUPERSONIC_PHYMEM_BASE 0x13600000
#define HISI_RESERVED_SUPERSONIC_PHYMEM_SIZE (0xA00000)
#define HISI_RESERVED_HHEE_PHYMEM_BASE 0x14000000
#define HISI_RESERVED_HHEE_PHYMEM_SIZE (0x800000)
#define HISI_HHEE_LOG_SIZE (0x20000)
#define HISI_HHEE_LOG_ADDR (HISI_RESERVED_HHEE_PHYMEM_BASE + HISI_RESERVED_HHEE_PHYMEM_SIZE - HISI_HHEE_LOG_SIZE)
#define HISI_RESERVED_MODEM_SOCP_PHYMEM_BASE 0x14800000
#define HISI_RESERVED_MODEM_SOCP_PHYMEM_BASE_FAMA 0x14800000
#define HISI_RESERVED_MODEM_SOCP_PHYMEM_SIZE (0x2000000)
#define HISI_RESERVED_ISP_BOOT_PHYMEM_BASE 0x1A800000
#define HISI_RESERVED_ISP_BOOT_PHYMEM_SIZE (0x2500000)
#define HISI_RESERVED_IVP_PHYMEM_BASE 0x1CD00000
#define HISI_RESERVED_IVP_PHYMEM_SIZE (0x100000)
#define HISI_RESERVED_SECOS_PHYMEM_BASE 0x1CE00000
#define HISI_RESERVED_SECOS_PHYMEM_SIZE (0x3000000)
#define HISI_RESERVED_BL31_PHYMEM_BASE 0x1FE00000
#define HISI_RESERVED_BL31_PHYMEM_SIZE (0x400000)
#define HISI_RESERVED_SENSORHUB_PHYMEM_BASE 0x20200000
#define HISI_RESERVED_SENSORHUB_PHYMEM_SIZE (0x700000)
#define HISI_RESERVED_SENSORHUB_SHMEM_PHYMEM_BASE 0x20900000
#define HISI_RESERVED_SENSORHUB_SHMEM_PHYMEM_SIZE (0x40000)
#define HISI_RESERVED_SENSORHUB_SHARE_MEM_PHYMEM_BASE 0x20940000
#define HISI_RESERVED_SENSORHUB_SHARE_MEM_PHYMEM_SIZE (0x80000)
#define HISI_RESERVED_FAST_KER_AND_PHYMEM_BASE 0x209C0000
#define HISI_RESERVED_FAST_KER_AND_PHYMEM_SIZE (0x40000)
#define HISI_SUB_RESERVED_FASTBOOT_LOG_PYHMEM_BASE 0x209C0000
#define HISI_SUB_RESERVED_FASTBOOT_LOG_PYHMEM_SIZE (0x20000)
#define HISI_SUB_RESERVED_SCHARGE_PYHMEM_BASE 0x209E0000
#define HISI_SUB_RESERVED_SCHARGE_PYHMEM_SIZE (0x1000)
#define HISI_SUB_RESERVED_BL31_SHARE_MEM_PHYMEM_BASE 0x209E1000
#define HISI_SUB_RESERVED_BL31_SHARE_MEM_PHYMEM_SIZE (0x10000)
#define HISI_SUB_RESERVED_LCD_GAMMA_MEM_PHYMEM_BASE 0x209F1000
#define HISI_SUB_RESERVED_LCD_GAMMA_MEM_PHYMEM_SIZE (0x1000)
#define HISI_SUB_RESERVED_BRIGHTNESS_CHROMA_MEM_PHYMEM_BASE 0x209F2000
#define HISI_SUB_RESERVED_BRIGHTNESS_CHROMA_MEM_PHYMEM_SIZE (0x1000)
#define HISI_SUB_RESERVED_UNUSED_PHYMEM_BASE 0x209F3000
#define HISI_SUB_RESERVED_UNUSED_PHYMEM_SIZE (0x209FF000 - 0x209F3000)
#define HISI_SUB_RESERVED_MNTN_DUMP_PHYMEM_BASE 0x209FF000
#define HISI_SUB_RESERVED_MNTN_DUMP_PHYMEM_SIZE (0x1000)
#define HISI_RESERVED_PSTORE_PHYMEM_BASE 0x20A00000
#define HISI_RESERVED_PSTORE_PHYMEM_SIZE (0x100000)
#define HISI_RESERVED_DP_HDCP2_PHYMEM_BASE 0x20B00000
#define HISI_RESERVED_DP_HDCP2_PHYMEM_SIZE (0x100000)
#define HISI_RESERVED_MODEM_SAN_PHYMEM_BASE 0x38000000
#define HISI_RESERVED_MODEM_SAN_PHYMEM_SIZE (0x8000000)
#ifdef CONFIG_HISI_FAMA
#define HISI_RESERVED_KERNEL_DUMP_PROTECT_BASE 0x45D200000
#define HISI_RESERVED_KERNEL_DUMP_PRORECT_SIZE (0x20000000)
#else
#define HISI_RESERVED_KERNEL_DUMP_PROTECT_BASE 0x8FD00000
#define HISI_RESERVED_KERNEL_DUMP_PRORECT_SIZE (0x20000000)
#endif
#ifdef CONFIG_HISI_FAMA
#define HISI_RESERVED_CHANS3_HOLE_PROTECT_BASE 0x80000000
#define HISI_RESERVED_CHANS3_HOLE_PRORECT_SIZE (0x3F400000)
#define HISI_RESERVED_CHANS3_ALL_PROTECT_BASE 0x45D200000
#define HISI_RESERVED_CHANS3_ALL_PRORECT_SIZE (0x2DF00000)
#define HISI_RESERVED_CHANS1_ALL_PROTECT_BASE 0x5A0000000
#define HISI_RESERVED_CHANS1_ALL_PRORECT_SIZE (0xFD00000)
#endif
#ifdef CONFIG_HISI_FAMA
#define HISI_RESERVED_MODEM_PHYMEM_BASE_FAMA 0x5A0000000
#define HISI_RESERVED_MODEM_PHYMEM_BASE 0xA0000000
#else
#define HISI_RESERVED_MODEM_PHYMEM_BASE 0x80000000
#endif
#define HISI_RESERVED_MODEM_PHYMEM_SIZE (0xA380000)
#ifdef CONFIG_HISI_FAMA
#define HISI_RESERVED_HIFI_PHYMEM_BASE_FAMA 0x5AD500000
#endif
#define HISI_RESERVED_SEC_CAMERA_PHYMEM_BASE 0x8CA00000
#define HISI_RESERVED_SEC_CAMERA_PHYMEM_SIZE (0xB00000)
#define HISI_RESERVED_HIFI_PHYMEM_BASE 0x8D500000
#define HISI_RESERVED_HIFI_PHYMEM_SIZE (0xC00000)
#ifdef CONFIG_HISI_FAMA
#define HISI_RESERVED_LPMX_CORE_PHYMEM_BASE_FAMA 0x5AE100000
#endif
#define HISI_RESERVED_LPMX_CORE_PHYMEM_BASE 0x8E100000
#define HISI_RESERVED_LPMX_CORE_PHYMEM_SIZE (0x100000)
#ifdef CONFIG_HISI_FAMA
#define HISI_RESERVED_LPMCU_PHYMEM_BASE_FAMA 0x5AE200000
#endif
#define HISI_RESERVED_LPMCU_PHYMEM_BASE 0x8E200000
#define HISI_RESERVED_LPMCU_PHYMEM_SIZE 0x40000
#ifdef CONFIG_HISI_FAMA
#define HISI_RESERVED_CHANS1_RESERVE_PROTECT_BASE_FAMA 0x5AE240000
#endif
#define HISI_RESERVED_CHANS1_RESERVE_PROTECT_BASE 0x8E240000
#define HISI_RESERVED_CHANS1_RESERVE_PROTECT_SIZE 0xC0000
#ifdef CONFIG_HISI_FAMA
#define HISI_RESERVED_HIFI_DATA_PHYMEM_BASE_FAMA 0x5AE300000
#endif
#define HISI_RESERVED_HIFI_DATA_PHYMEM_BASE 0x8E300000
#define HISI_RESERVED_HIFI_DATA_PHYMEM_SIZE (0x500000)
#ifdef CONFIG_HISI_FAMA
#define HISI_RESERVED_MODEM_SHARE_PHYMEM_HIFI_ICC_BASE 0x8E800000
#define HISI_RESERVED_MODEM_SHARE_PHYMEM_LPMCU_BASE 0x8E800000
#define HISI_RESERVED_MODEM_SHARE_PHYMEM_BASE 0xAE800000
#define HISI_RESERVED_MODEM_SHARE_PHYMEM_BASE_FAMA 0x5AE800000
#else
#define HISI_RESERVED_MODEM_SHARE_PHYMEM_BASE 0x8E800000
#endif
#define HISI_RESERVED_MODEM_SHARE_PHYMEM_SIZE (0xB00000)
#ifdef CONFIG_HISI_FAMA
#define HISI_RESERVED_MODEM_MNTN_PHYMEM_BASE 0xAF400000
#define HISI_RESERVED_MODEM_MNTN_PHYMEM_BASE_FAMA 0x5AF400000
#else
#define HISI_RESERVED_MODEM_MNTN_PHYMEM_BASE 0x8F400000
#endif
#define HISI_RESERVED_MODEM_MNTN_PHYMEM_SIZE (0x100000)
#ifdef CONFIG_HISI_FAMA
#define HISI_RESERVED_MNTN_PHYMEM_BASE_FAMA 0x5AF500000
#endif
#define HISI_RESERVED_MNTN_PHYMEM_BASE 0x8F500000
#define HISI_RESERVED_MNTN_PHYMEM_SIZE (0x800000)
#define HISI_RESERVED_DRM_CMA_BASE 0x5A000000
#define HISI_RESERVED_DRM_CMA_SIZE (0x26000000)
#define HISI_RESERVED_DDR_TRAINING1_PHYMEM_BASE 0x07B00000
#define HISI_RESERVED_DDR_TRAINING1_PHYMEM_SIZE (0x07B08000 - 0x07B00000)
#ifdef CONFIG_HISI_FAMA
#define HISI_RESERVED_LPMX_CORE_PHYMEM_BASE_UNIQUE (HISI_RESERVED_LPMX_CORE_PHYMEM_BASE_FAMA)
#define HISI_RESERVED_LPMCU_PHYMEM_BASE_UNIQUE (HISI_RESERVED_LPMCU_PHYMEM_BASE_FAMA)
#define HISI_RESERVED_MNTN_PHYMEM_BASE_UNIQUE (HISI_RESERVED_MNTN_PHYMEM_BASE_FAMA)
#else
#define HISI_RESERVED_LPMX_CORE_PHYMEM_BASE_UNIQUE (HISI_RESERVED_LPMX_CORE_PHYMEM_BASE)
#define HISI_RESERVED_LPMCU_PHYMEM_BASE_UNIQUE (HISI_RESERVED_LPMCU_PHYMEM_BASE)
#define HISI_RESERVED_MNTN_PHYMEM_BASE_UNIQUE (HISI_RESERVED_MNTN_PHYMEM_BASE)
#endif
#endif
