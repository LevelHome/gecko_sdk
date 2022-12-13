/***************************************************************************//**
 * @file
 * @brief USB Host Class
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

#ifndef  _USBH_CLASS_H_
#define  _USBH_CLASS_H_

/********************************************************************************************************
 ********************************************************************************************************
 *                                               INCLUDE FILES
 ********************************************************************************************************
 *******************************************************************************************************/

#include  <cpu/include/cpu.h>

/********************************************************************************************************
 ********************************************************************************************************
 *                                               DEFINES
 ********************************************************************************************************
 *******************************************************************************************************/

#define  USBH_CLASS_FNCT_HANDLE_INVALID                     0xFFFFu

/********************************************************************************************************
 ********************************************************************************************************
 *                                               DATA TYPES
 ********************************************************************************************************
 *******************************************************************************************************/

/********************************************************************************************************
 *                                               CLASS HANDLE
 *
 * Note(s) : (1) Class handles are 16 bits value that contain a validation count and an index.
 *
 *                               MSB                LSB
 *               -----------------------------------
 *               | POSITION  | 16 .. 8   | 7 .. 0  |
 *               -----------------------------------
 *               | USAGE     | Validate  |  Index  |
 *               |           | Cnt       |         |
 *               -----------------------------------
 *******************************************************************************************************/

typedef CPU_INT16U USBH_CLASS_FNCT_HANDLE;

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE END
 ********************************************************************************************************
 *******************************************************************************************************/

#endif