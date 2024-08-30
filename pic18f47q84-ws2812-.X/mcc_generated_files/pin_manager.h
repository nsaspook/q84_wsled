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

// get/set RA1 procedures
#define RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RA1_GetValue()              PORTAbits.RA1
#define RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RA1_SetPullup()             do { WPUAbits.WPUA1 = 1; } while(0)
#define RA1_ResetPullup()           do { WPUAbits.WPUA1 = 0; } while(0)
#define RA1_SetAnalogMode()         do { ANSELAbits.ANSELA1 = 1; } while(0)
#define RA1_SetDigitalMode()        do { ANSELAbits.ANSELA1 = 0; } while(0)

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

// get/set FFT1 aliases
#define FFT1_TRIS                 TRISDbits.TRISD1
#define FFT1_LAT                  LATDbits.LATD1
#define FFT1_PORT                 PORTDbits.RD1
#define FFT1_WPU                  WPUDbits.WPUD1
#define FFT1_OD                   ODCONDbits.ODCD1
#define FFT1_ANS                  ANSELDbits.ANSELD1
#define FFT1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define FFT1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define FFT1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define FFT1_GetValue()           PORTDbits.RD1
#define FFT1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define FFT1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define FFT1_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define FFT1_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define FFT1_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define FFT1_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define FFT1_SetAnalogMode()      do { ANSELDbits.ANSELD1 = 1; } while(0)
#define FFT1_SetDigitalMode()     do { ANSELDbits.ANSELD1 = 0; } while(0)

// get/set FFT2 aliases
#define FFT2_TRIS                 TRISDbits.TRISD2
#define FFT2_LAT                  LATDbits.LATD2
#define FFT2_PORT                 PORTDbits.RD2
#define FFT2_WPU                  WPUDbits.WPUD2
#define FFT2_OD                   ODCONDbits.ODCD2
#define FFT2_ANS                  ANSELDbits.ANSELD2
#define FFT2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define FFT2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define FFT2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define FFT2_GetValue()           PORTDbits.RD2
#define FFT2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define FFT2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define FFT2_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define FFT2_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define FFT2_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define FFT2_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define FFT2_SetAnalogMode()      do { ANSELDbits.ANSELD2 = 1; } while(0)
#define FFT2_SetDigitalMode()     do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set FFT3 aliases
#define FFT3_TRIS                 TRISDbits.TRISD3
#define FFT3_LAT                  LATDbits.LATD3
#define FFT3_PORT                 PORTDbits.RD3
#define FFT3_WPU                  WPUDbits.WPUD3
#define FFT3_OD                   ODCONDbits.ODCD3
#define FFT3_ANS                  ANSELDbits.ANSELD3
#define FFT3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define FFT3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define FFT3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define FFT3_GetValue()           PORTDbits.RD3
#define FFT3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define FFT3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define FFT3_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define FFT3_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define FFT3_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define FFT3_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define FFT3_SetAnalogMode()      do { ANSELDbits.ANSELD3 = 1; } while(0)
#define FFT3_SetDigitalMode()     do { ANSELDbits.ANSELD3 = 0; } while(0)

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