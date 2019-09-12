/***************************************************************************//**
 * @file
 * @brief Network Device Driver - Ethernet
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc.  Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement.
 * The software is governed by the sections of the MSLA applicable to Micrium
 * Software.
 *
 ******************************************************************************/

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE
 ********************************************************************************************************
 *******************************************************************************************************/

#ifndef  NET_DRV_ETHER_H
#define  NET_DRV_ETHER_H

#include  <net/include/net_cfg_net.h>

#ifdef  NET_IF_ETHER_MODULE_EN
#include  <net/include/net_if_ether.h>
#include  <net/source/tcpip/net_if_ether_priv.h>
#include  <common/include/rtos_types.h>

/********************************************************************************************************
 ********************************************************************************************************
 *                                           GLOBAL VARIABLES
 ********************************************************************************************************
 *******************************************************************************************************/

/********************************************************************************************************
 *                                               GEM DRIVER
 *******************************************************************************************************/

extern const NET_DEV_API_ETHER NetDev_API_GEM;

/********************************************************************************************************
 *                                               USBD CDC-EEM
 *******************************************************************************************************/

//                                                                 ----------------- NET USBD CDCEEM DEV CFG EXT ------------------
typedef struct net_dev_cfg_usbd_cdc_eem_ext {
  CPU_INT08U ClassNbr;                                          // Class number.
} NET_DEV_CFG_USBD_CDC_EEM_EXT;

extern const NET_DEV_API_ETHER NetDev_API_USBD_CDCEEM;

/********************************************************************************************************
 *                                               WINPCAP DRIVER
 *******************************************************************************************************/

extern const NET_DEV_API_ETHER NetDev_API_WinPcap;

typedef struct net_dev_cfg_ext_winpcap {
  RTOS_TASK_CFG TaskCfg;
  CPU_INT08U    PC_IFNbr;
} NET_DEV_CFG_EXT_WINPCAP;

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE END
 ********************************************************************************************************
 *******************************************************************************************************/

#endif // NET_IF_ETHER_MODULE_EN
#endif // NET_DRV_ETHER_H