/*
 * hardware of LED output
 * SPI1
 * DMA3
 * CLC3
 * PWM1
 */

#pragma warning disable 520
#pragma warning disable 1090
#pragma warning disable 1498
#pragma warning disable 2053

#include "mcc_generated_files/mcc.h"

bool buttonPressed = false;

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // Enable high priority global interrupts
    INTERRUPT_GlobalInterruptHighEnable();

    while (1)
    {        
        __delay_ms(500);
        
    }
}
/**
 End of File
*/