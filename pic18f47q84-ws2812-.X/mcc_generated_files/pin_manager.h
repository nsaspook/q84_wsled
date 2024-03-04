/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F47Q84
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 procedures
#define RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()              PORTAbits.RA0
#define RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()             do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()           do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode()         do { ANSELAbits.ANSELA0 = 1; } while(0)
#define RA0_SetDigitalMode()        do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set MLED aliases
#define MLED_TRIS                 TRISBbits.TRISB1
#define MLED_LAT                  LATBbits.LATB1
#define MLED_PORT                 PORTBbits.RB1
#define MLED_WPU                  WPUBbits.WPUB1
#define MLED_OD                   ODCONBbits.ODCB1
#define MLED_ANS                  ANSELBbits.ANSELB1
#define MLED_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define MLED_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define MLED_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define MLED_GetValue()           PORTBbits.RB1
#define MLED_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define MLED_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define MLED_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define MLED_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define MLED_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define MLED_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define MLED_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define MLED_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set RLED aliases
#define RLED_TRIS                 TRISBbits.TRISB2
#define RLED_LAT                  LATBbits.LATB2
#define RLED_PORT                 PORTBbits.RB2
#define RLED_WPU                  WPUBbits.WPUB2
#define RLED_OD                   ODCONBbits.ODCB2
#define RLED_ANS                  ANSELBbits.ANSELB2
#define RLED_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define RLED_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define RLED_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RLED_GetValue()           PORTBbits.RB2
#define RLED_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define RLED_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define RLED_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define RLED_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define RLED_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define RLED_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define RLED_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define RLED_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set DLED aliases
#define DLED_TRIS                 TRISBbits.TRISB3
#define DLED_LAT                  LATBbits.LATB3
#define DLED_PORT                 PORTBbits.RB3
#define DLED_WPU                  WPUBbits.WPUB3
#define DLED_OD                   ODCONBbits.ODCB3
#define DLED_ANS                  ANSELBbits.ANSELB3
#define DLED_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define DLED_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define DLED_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define DLED_GetValue()           PORTBbits.RB3
#define DLED_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define DLED_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define DLED_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define DLED_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define DLED_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define DLED_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define DLED_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define DLED_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()              PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()             do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()           do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode()         do { ANSELCbits.ANSELC0 = 1; } while(0)
#define RC0_SetDigitalMode()        do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()             do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()           do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSELC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSELC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSELC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RD0 procedures
#define RD0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define RD0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define RD0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define RD0_GetValue()              PORTDbits.RD0
#define RD0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define RD0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define RD0_SetPullup()             do { WPUDbits.WPUD0 = 1; } while(0)
#define RD0_ResetPullup()           do { WPUDbits.WPUD0 = 0; } while(0)
#define RD0_SetAnalogMode()         do { ANSELDbits.ANSELD0 = 1; } while(0)
#define RD0_SetDigitalMode()        do { ANSELDbits.ANSELD0 = 0; } while(0)

// get/set RD1 procedures
#define RD1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define RD1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define RD1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define RD1_GetValue()              PORTDbits.RD1
#define RD1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define RD1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define RD1_SetPullup()             do { WPUDbits.WPUD1 = 1; } while(0)
#define RD1_ResetPullup()           do { WPUDbits.WPUD1 = 0; } while(0)
#define RD1_SetAnalogMode()         do { ANSELDbits.ANSELD1 = 1; } while(0)
#define RD1_SetDigitalMode()        do { ANSELDbits.ANSELD1 = 0; } while(0)

// get/set CS aliases
#define CS_TRIS                 TRISDbits.TRISD3
#define CS_LAT                  LATDbits.LATD3
#define CS_PORT                 PORTDbits.RD3
#define CS_WPU                  WPUDbits.WPUD3
#define CS_OD                   ODCONDbits.ODCD3
#define CS_ANS                  ANSELDbits.ANSELD3
#define CS_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define CS_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define CS_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define CS_GetValue()           PORTDbits.RD3
#define CS_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define CS_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define CS_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define CS_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define CS_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define CS_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define CS_SetAnalogMode()      do { ANSELDbits.ANSELD3 = 1; } while(0)
#define CS_SetDigitalMode()     do { ANSELDbits.ANSELD3 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);




#endif // PIN_MANAGER_H
/**
 End of File
*/