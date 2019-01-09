![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# PLL Click

- **CIC Prefix**  : PLL
- **Author**      : Katarina Perenidc
- **Verison**     : 1.0.0
- **Date**        : Feb 2018.

---

### Software Support

We provide a library for the PLL Click on our [LibStock](https://libstock.mikroe.com/projects/view/2355/pll-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

This library provides some functions for setting different clock outputs.

Key functions :

- ```void pll_setClockOutput(uint8_t mode);``` - Function for enabling and disabling of the colock output.
- ```void pll_setPLL_3x();``` - Function for multiplying of the clock 3 times.
- ```void pll_setPLL_4x();``` - Function for multiplying of the clock 4 times.
- ```void pll_setPLL_5x();``` - Function for multiplying of the clock 5 times.
- ```void pll_setPLL_6x();``` - Function for multiplying of the clock 6 times.
- ```void pll_setPLL_8x();``` - Function for multiplying of the clock 8 times.

**Examples Description**

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


```
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
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2355/pll-click) page.

Other mikroE Libraries used in the example:

- GPIO

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.


---
---
