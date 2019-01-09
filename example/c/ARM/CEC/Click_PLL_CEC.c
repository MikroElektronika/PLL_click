/*
Example for PLL Click

    Date          : Feb 2018.
    Author        : MikroE Team

Test configuration CEC :
    
    MCU              : CEC1702
    Dev. Board       : Clicker 2 for CEC1702
    ARM Compiler ver : v6.0.0.0

---
Description :

The application is composed of three sections :

- System Initialization -  Initializes CS pin, RST pin and AN pin as output
- Application Initialization - Initializes driver init and set mode chip as ACTIVE
- Application Task - (code snippet)
     - Every 2 seconds, the PLL increases the input clock in the order of x4, x5, x6 and x8.

     - If you use PLL x4, x5, x6 or x8, set S0 (RST pin) and S1 (AN pin) as OUTPUT.
     - If you use PLL x3.125 or x6.25, set S1 ( AN pin ) as INPUT and S0( RST pin ) as OUTPUT.
     - If you use PLL x3 or x5.3125, set S0 ( RST pin ) as INPUT and S1 ( AN pin ) as OUTPUT.
   
     
  For the test, 
  the onboard crystal oscillator is used where the frequency of the input clock is fixed.
  Using ICK (PWM pin) as input, it allows continuous output frequency setting to be in a wide range.

*/

#include "Click_PLL_types.h"
#include "Click_PLL_config.h"

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN,  _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_AN_PIN,  _GPIO_OUTPUT );
    Delay_ms( 100 );
}

void applicationInit()
{
    pll_gpioDriverInit( (T_PLL_P)&_MIKROBUS1_GPIO );
    pll_setClockOutput(_PLL_CLOCK_ENABLE);
}

void applicationTask()
{
    pll_setPLL_4x();
    Delay_ms( 2000 );
    pll_setPLL_5x();
    Delay_ms( 2000 );
    pll_setPLL_6x();
    Delay_ms( 2000 );
    pll_setPLL_8x();
    Delay_ms( 2000 );
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}