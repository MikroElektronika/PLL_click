/*
    __pll_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __pll_driver.h
@brief    PLL Driver
@mainpage PLL Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   PLL
@brief      PLL Click Driver
@{

| Global Library Prefix | **PLL** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **Feb 2018.**      |
| Developer             | **MikroE Team**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _PLL_H_
#define _PLL_H_

/** 
 * @macro T_PLL_P
 * @brief Driver Abstract type 
 */
#define T_PLL_P    const uint8_t*

/** @defgroup PLL_COMPILE Compilation Config */              /** @{ */

//  #define   __PLL_DRV_SPI__                            /**<     @macro __PLL_DRV_SPI__  @brief SPI driver selector */
//  #define   __PLL_DRV_I2C__                            /**<     @macro __PLL_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __PLL_DRV_UART__                           /**<     @macro __PLL_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup PLL_VAR Variables */                           /** @{ */

extern const uint8_t _PLL_CLOCK_ENABLE;
extern const uint8_t _PLL_CLOCK_DISABLE;
                                                                /** @} */
/** @defgroup PLL_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup PLL_INIT Driver Initialization */              /** @{ */

#ifdef   __PLL_DRV_SPI__
void pll_spiDriverInit(T_PLL_P gpioObj, T_PLL_P spiObj);
#endif
#ifdef   __PLL_DRV_I2C__
void pll_i2cDriverInit(T_PLL_P gpioObj, T_PLL_P i2cObj, uint8_t slave);
#endif
#ifdef   __PLL_DRV_UART__
void pll_uartDriverInit(T_PLL_P gpioObj, T_PLL_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void pll_gpioDriverInit(T_PLL_P gpioObj);
                                                                       /** @} */
/** @defgroup PLL_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Functions for settings clock output
 *
 * @param[in] mode  mode which be set
 *
 * Options:
     Clock Enable,
     Clock Disable
 */
void pll_setClockOutput(uint8_t mode);

/**
 * @brief Functions for settings PLL x4
 *
 * If you use PLL x4, set S0 (RST pin) and S1 (AN pin) as OUTPUT.
 */
void pll_setPLL_4x();

/**
 * @brief Functions for settings PLL x5
 *
 * If you use PLL x5, set S0 (RST pin) and S1 (AN pin) as OUTPUT.
 */
void pll_setPLL_5x();

/**
 * @brief Functions for settings PLL x6
 *
 * If you use PLL x6, set S0 (RST pin) and S1 (AN pin) as OUTPUT.
 */
void pll_setPLL_6x();

/**
 * @brief Functions for settings PLL x8
 *
 * If you use PLL x8, set S0 (RST pin) and S1 (AN pin) as OUTPUT.
 */
void pll_setPLL_8x();


/**
 * @brief Functions for settings PLL clock x3
 *
 * If you use PLL x3, set S0 ( RST pin ) as INPUT and S1 ( AN pin ) as OUTPUT.
 */
void pll_setPLL_3x();


/**
 * @brief Functions for settings PLL clock x3.125
 *
 * If you use PLL x3.125, set S1 ( AN pin ) as INPUT and S0( RST pin ) as OUTPUT.
 */
void pll_setPLL_3_125x();

/**
 * @brief Functions for settings PLL clock x6.25
 *
 * If you use PLL x6.25, set S1 ( AN pin ) as INPUT and S0( RST pin ) as OUTPUT.
 */
void pll_setPLL_6_25x();

/**
 * @brief Functions for settings PLL clock x5.3125
 *
 * If you use PLL x5.3125, set S0 ( RST pin ) as INPUT and S1 ( AN pin ) as OUTPUT.
 */
void pll_setPLL_5_3125x();

                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_PLL_STM.c
    @example Click_PLL_TIVA.c
    @example Click_PLL_CEC.c
    @example Click_PLL_KINETIS.c
    @example Click_PLL_MSP.c
    @example Click_PLL_PIC.c
    @example Click_PLL_PIC32.c
    @example Click_PLL_DSPIC.c
    @example Click_PLL_AVR.c
    @example Click_PLL_FT90x.c
    @example Click_PLL_STM.mbas
    @example Click_PLL_TIVA.mbas
    @example Click_PLL_CEC.mbas
    @example Click_PLL_KINETIS.mbas
    @example Click_PLL_MSP.mbas
    @example Click_PLL_PIC.mbas
    @example Click_PLL_PIC32.mbas
    @example Click_PLL_DSPIC.mbas
    @example Click_PLL_AVR.mbas
    @example Click_PLL_FT90x.mbas
    @example Click_PLL_STM.mpas
    @example Click_PLL_TIVA.mpas
    @example Click_PLL_CEC.mpas
    @example Click_PLL_KINETIS.mpas
    @example Click_PLL_MSP.mpas
    @example Click_PLL_PIC.mpas
    @example Click_PLL_PIC32.mpas
    @example Click_PLL_DSPIC.mpas
    @example Click_PLL_AVR.mpas
    @example Click_PLL_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __pll_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */