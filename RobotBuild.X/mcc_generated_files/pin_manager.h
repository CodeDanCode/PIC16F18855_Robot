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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16F18855
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.00
        MPLAB 	          :  MPLAB X 5.10	
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

// get/set LED0 aliases
#define LED0_TRIS                 TRISAbits.TRISA0
#define LED0_LAT                  LATAbits.LATA0
#define LED0_PORT                 PORTAbits.RA0
#define LED0_WPU                  WPUAbits.WPUA0
#define LED0_OD                   ODCONAbits.ODCA0
#define LED0_ANS                  ANSELAbits.ANSA0
#define LED0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LED0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LED0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LED0_GetValue()           PORTAbits.RA0
#define LED0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LED0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LED0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LED0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LED0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define LED0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define LED0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define LED0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set LED3 aliases
#define LED3_TRIS                 TRISAbits.TRISA3
#define LED3_LAT                  LATAbits.LATA3
#define LED3_PORT                 PORTAbits.RA3
#define LED3_WPU                  WPUAbits.WPUA3
#define LED3_OD                   ODCONAbits.ODCA3
#define LED3_ANS                  ANSELAbits.ANSA3
#define LED3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LED3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LED3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LED3_GetValue()           PORTAbits.RA3
#define LED3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LED3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LED3_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define LED3_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define LED3_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define LED3_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define LED3_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define LED3_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set RA5 procedures
#define RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RA5_GetValue()              PORTAbits.RA5
#define RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define RA5_SetPullup()             do { WPUAbits.WPUA5 = 1; } while(0)
#define RA5_ResetPullup()           do { WPUAbits.WPUA5 = 0; } while(0)
#define RA5_SetAnalogMode()         do { ANSELAbits.ANSA5 = 1; } while(0)
#define RA5_SetDigitalMode()        do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set Trig aliases
#define Trig_TRIS                 TRISBbits.TRISB4
#define Trig_LAT                  LATBbits.LATB4
#define Trig_PORT                 PORTBbits.RB4
#define Trig_WPU                  WPUBbits.WPUB4
#define Trig_OD                   ODCONBbits.ODCB4
#define Trig_ANS                  ANSELBbits.ANSB4
#define Trig_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define Trig_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define Trig_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define Trig_GetValue()           PORTBbits.RB4
#define Trig_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define Trig_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define Trig_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define Trig_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define Trig_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define Trig_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define Trig_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define Trig_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set Echo aliases
#define Echo_TRIS                 TRISBbits.TRISB5
#define Echo_LAT                  LATBbits.LATB5
#define Echo_PORT                 PORTBbits.RB5
#define Echo_WPU                  WPUBbits.WPUB5
#define Echo_OD                   ODCONBbits.ODCB5
#define Echo_ANS                  ANSELBbits.ANSB5
#define Echo_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define Echo_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define Echo_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define Echo_GetValue()           PORTBbits.RB5
#define Echo_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define Echo_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define Echo_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define Echo_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define Echo_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define Echo_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define Echo_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define Echo_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()              PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()             do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()           do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode()         do { ANSELCbits.ANSC0 = 1; } while(0)
#define RC0_SetDigitalMode()        do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()             do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()           do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode()         do { ANSELCbits.ANSC1 = 1; } while(0)
#define RC1_SetDigitalMode()        do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set PIN2 aliases
#define PIN2_TRIS                 TRISCbits.TRISC2
#define PIN2_LAT                  LATCbits.LATC2
#define PIN2_PORT                 PORTCbits.RC2
#define PIN2_WPU                  WPUCbits.WPUC2
#define PIN2_OD                   ODCONCbits.ODCC2
#define PIN2_ANS                  ANSELCbits.ANSC2
#define PIN2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define PIN2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define PIN2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define PIN2_GetValue()           PORTCbits.RC2
#define PIN2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define PIN2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define PIN2_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define PIN2_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define PIN2_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define PIN2_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define PIN2_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define PIN2_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()             do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()           do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set PIN5 aliases
#define PIN5_TRIS                 TRISCbits.TRISC5
#define PIN5_LAT                  LATCbits.LATC5
#define PIN5_PORT                 PORTCbits.RC5
#define PIN5_WPU                  WPUCbits.WPUC5
#define PIN5_OD                   ODCONCbits.ODCC5
#define PIN5_ANS                  ANSELCbits.ANSC5
#define PIN5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define PIN5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define PIN5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define PIN5_GetValue()           PORTCbits.RC5
#define PIN5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define PIN5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define PIN5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define PIN5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define PIN5_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define PIN5_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define PIN5_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define PIN5_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set PIN6 aliases
#define PIN6_TRIS                 TRISCbits.TRISC6
#define PIN6_LAT                  LATCbits.LATC6
#define PIN6_PORT                 PORTCbits.RC6
#define PIN6_WPU                  WPUCbits.WPUC6
#define PIN6_OD                   ODCONCbits.ODCC6
#define PIN6_ANS                  ANSELCbits.ANSC6
#define PIN6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define PIN6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define PIN6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define PIN6_GetValue()           PORTCbits.RC6
#define PIN6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define PIN6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define PIN6_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define PIN6_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define PIN6_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define PIN6_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define PIN6_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define PIN6_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set PIN7 aliases
#define PIN7_TRIS                 TRISCbits.TRISC7
#define PIN7_LAT                  LATCbits.LATC7
#define PIN7_PORT                 PORTCbits.RC7
#define PIN7_WPU                  WPUCbits.WPUC7
#define PIN7_OD                   ODCONCbits.ODCC7
#define PIN7_ANS                  ANSELCbits.ANSC7
#define PIN7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define PIN7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define PIN7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define PIN7_GetValue()           PORTCbits.RC7
#define PIN7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define PIN7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define PIN7_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define PIN7_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define PIN7_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define PIN7_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define PIN7_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define PIN7_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

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

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/