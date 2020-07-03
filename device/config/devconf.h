﻿/*
 *----------------------------------------------------------------------
 *    Device Driver for micro T-Kernel
 *
 *    Copyright (C) 2020 by Ken Sakamura.
 *    This software is distributed under the T-License 2.2.
 *----------------------------------------------------------------------
 *
 *    Released by TRON Forum(http://www.tron.org) at 2020//.
 *
 *----------------------------------------------------------------------
 */

/*
 *	devconf.h
 *	Device configuration definition
 */

#ifndef	__DEV_CONF_H__
#define	__DEV_CONF_H__

/* ------------------------------------------------------------------------ */
/* Device usage settings
 *	1: Use   0: Do not use
 */
#define DEVCNF_DEV_SER		1		// Serial communication device 
#define DEVCNF_DEV_ADC		1		// A/D conversion device
#define DEVCNF_DEV_IIC		1		// I2C communication device


#endif	/* __DEV_CONF_H__ */