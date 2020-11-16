/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16F18855
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */

float echo();
void Stop();
void Forward();
void Backwards();
void Right();
void Left();


void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    
    Trig_SetHigh();
    __delay_ms(2000);
    int count = 0;
    float look;
    while (1)
    {
        
        if(CLC1_OutputStatusGet() == 0){
            LED0_SetLow();
            Stop();
            LED3_SetHigh();
        }else{
            LED3_SetLow();
            LED0_SetHigh();
            look = echo();
            if(look > 30){
                Forward();
                count = 0;
            }
            else if (look <=30){
                Stop(); 
                ++count;
                printf("\n\rcount : %d",count);
                printf("\n\rSTOPED Motors");
                if(count >5){
                   Backwards();
                   Right();
                   Stop();
                   count = 0;
               }       
            }
        }
    }
}
/**
 End of File
*/

float echo(){
    
    Trig_SetHigh();
    __delay_us(10);
    Trig_SetLow();
    TMR1GIF = 0;
    TMR1_WriteTimer(0);
    TMR1_StartSinglePulseAcquisition();
    while(!TMR1GIF);
    float look = TMR1_ReadTimer()*(300.0/37000);
    printf("\n\rEcho was just called %f",look);
    
    return look;
}

void Stop(){
   // LED0_SetLow();
    PIN7_SetLow();
    PIN2_SetLow();
    PIN6_SetLow();
    PIN5_SetLow();
   //LED3_SetHigh();
    
}

void Forward(){
   // LED3_SetLow();
    PIN7_SetHigh();
    PIN2_SetLow();
    PIN6_SetHigh();
    PIN5_SetLow();
   // LED0_SetHigh();
}

void Right(){
    PIN7_SetLow();
    PIN2_SetHigh();
    PIN6_SetHigh();
    PIN5_SetLow();
    __delay_ms(500);
    printf("\n\rturning Right");
}
void Left(){
    PIN7_SetHigh();
    PIN2_SetLow();
    PIN6_SetLow();
    PIN5_SetHigh();
    __delay_ms(250);
    printf("\n\rturning Left");
}
void Backwards(){
    PIN7_SetLow();
    PIN2_SetHigh();
    PIN6_SetLow();
    PIN5_SetHigh();
    __delay_ms(500);
    printf("\n\rmoving Backwards");
}
