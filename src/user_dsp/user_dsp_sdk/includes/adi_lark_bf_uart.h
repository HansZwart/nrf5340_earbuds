/*!
 * @brief     SPI Register Definition Header File, automatically generated by
 *            yoda2h v1.3.1 at 7/5/2021 7:01:28 AM.
 * 
 * @copyright copyright(c) 2018 - Analog Devices Inc.All Rights Reserved.
 *            This software is proprietary to Analog Devices, Inc. and its
 *            licensor. By using this software you agree to the terms of the
 *            associated analog devices software license agreement.
 */

/*! 
 * @addtogroup LARK_BF
 * @{
 */
#ifndef __ADI_LARK_BF_UART_H__
#define __ADI_LARK_BF_UART_H__

/*============= D E F I N E S ==============*/
#define REG_UART_RXTX_ADDR      0x40004800
#define BF_UART_RBR_INFO        0x40004800, 0x00000800

#define REG_UART_IEN_ADDR       0x40004804
#define BF_UART_ERBFI_INFO      0x40004804, 0x00000100
#define BF_UART_ETBEI_INFO      0x40004804, 0x00000101
#define BF_UART_ELSI_INFO       0x40004804, 0x00000102
#define BF_UART_EDSSI_INFO      0x40004804, 0x00000103
#define BF_UART_EDMAT_INFO      0x40004804, 0x00000104
#define BF_UART_EDMAR_INFO      0x40004804, 0x00000105

#define REG_UART_IIR_ADDR       0x40004808
#define BF_UART_NIRQ_INFO       0x40004808, 0x00000100
#define BF_UART_STA_INFO        0x40004808, 0x00000301
#define BF_UART_FEND_INFO       0x40004808, 0x00000206

#define REG_UART_LCR_ADDR       0x4000480C
#define BF_UART_WLS_INFO        0x4000480C, 0x00000200
#define BF_UART_STOPPED_INFO    0x4000480C, 0x00000102
#define BF_UART_PEN_INFO        0x4000480C, 0x00000103
#define BF_UART_EPS_INFO        0x4000480C, 0x00000104
#define BF_UART_SP_INFO         0x4000480C, 0x00000105
#define BF_UART_BRK_INFO        0x4000480C, 0x00000106

#define REG_UART_MCR_ADDR       0x40004810
#define BF_UART_DTR_INFO        0x40004810, 0x00000100
#define BF_UART_RTS_INFO        0x40004810, 0x00000101
#define BF_UART_OUT1_INFO       0x40004810, 0x00000102
#define BF_UART_OUT2_INFO       0x40004810, 0x00000103
#define BF_UART_LOOPBACK_INFO   0x40004810, 0x00000104

#define REG_UART_LSR_ADDR       0x40004814
#define BF_UART_DR_INFO         0x40004814, 0x00000100
#define BF_UART_OE_INFO         0x40004814, 0x00000101
#define BF_UART_PE_INFO         0x40004814, 0x00000102
#define BF_UART_FE_INFO         0x40004814, 0x00000103
#define BF_UART_BI_INFO         0x40004814, 0x00000104
#define BF_UART_THRE_INFO       0x40004814, 0x00000105
#define BF_UART_TEMT_INFO       0x40004814, 0x00000106
#define BF_UART_FIFOERR_INFO    0x40004814, 0x00000107

#define REG_UART_MSR_ADDR       0x40004818
#define BF_UART_DCTS_INFO       0x40004818, 0x00000100
#define BF_UART_DDSR_INFO       0x40004818, 0x00000101
#define BF_UART_TERI_INFO       0x40004818, 0x00000102
#define BF_UART_DDCD_INFO       0x40004818, 0x00000103
#define BF_UART_CTS_INFO        0x40004818, 0x00000104
#define BF_UART_DSR_INFO        0x40004818, 0x00000105
#define BF_UART_RI_INFO         0x40004818, 0x00000106
#define BF_UART_DCD_INFO        0x40004818, 0x00000107

#define REG_UART_SCR_ADDR       0x4000481C
#define BF_UART_SCR_INFO        0x4000481C, 0x00000800

#define REG_UART_FCR_ADDR       0x40004820
#define BF_UART_FIFOEN_INFO     0x40004820, 0x00000100
#define BF_UART_RFCLR_INFO      0x40004820, 0x00000101
#define BF_UART_TFCLR_INFO      0x40004820, 0x00000102
#define BF_UART_FDMAMD_INFO     0x40004820, 0x00000103
#define BF_UART_RFTRIG_INFO     0x40004820, 0x00000206

#define REG_UART_FBR_ADDR       0x40004824
#define BF_UART_DIVN_INFO       0x40004824, 0x00000B00
#define BF_UART_DIVM_INFO       0x40004824, 0x0000020B
#define BF_UART_FBEN_INFO       0x40004824, 0x0000010F

#define REG_UART_DIV_ADDR       0x40004828
#define BF_UART_DIV_INFO        0x40004828, 0x00001000

#define REG_UART_LCR2_ADDR      0x4000482C
#define BF_UART_OSR_INFO        0x4000482C, 0x00000200

#define REG_UART_CTL_ADDR       0x40004830
#define BF_UART_FORCECLKON_INFO 0x40004830, 0x00000101
#define BF_UART_RXINV_INFO      0x40004830, 0x00000104
#define BF_UART_REV_INFO        0x40004830, 0x00000808

#define REG_UART_RFC_ADDR       0x40004834
#define BF_UART_RFC_INFO        0x40004834, 0x00000500

#define REG_UART_TFC_ADDR       0x40004838
#define BF_UART_TFC_INFO        0x40004838, 0x00000500

#define REG_UART_RSC_ADDR       0x4000483C
#define BF_UART_OENP_INFO       0x4000483C, 0x00000100
#define BF_UART_OENSP_INFO      0x4000483C, 0x00000101
#define BF_UART_DISRX_INFO      0x4000483C, 0x00000102
#define BF_UART_DISTX_INFO      0x4000483C, 0x00000103

#define REG_UART_ACR_ADDR       0x40004840
#define BF_UART_ABE_INFO        0x40004840, 0x00000100
#define BF_UART_DNIEN_INFO      0x40004840, 0x00000101
#define BF_UART_TOIEN_INFO      0x40004840, 0x00000102
#define BF_UART_SEC_INFO        0x40004840, 0x00000304
#define BF_UART_EEC_INFO        0x40004840, 0x00000408

#define REG_UART_ASRL_ADDR      0x40004844
#define BF_UART_DONE_INFO       0x40004844, 0x00000100
#define BF_UART_BRKTO_INFO      0x40004844, 0x00000101
#define BF_UART_NSETO_INFO      0x40004844, 0x00000102
#define BF_UART_NEETO_INFO      0x40004844, 0x00000103
#define BF_UART_CNTL_INFO       0x40004844, 0x00000C04

#define REG_UART_ASRH_ADDR      0x40004848
#define BF_UART_CNTH_INFO       0x40004848, 0x00000800

#endif /* __ADI_LARK_BF_UART_H__ */
/*! @} */
