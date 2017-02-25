/*----------------------------------------------------------------------------
 * Name:    LED.c
 * Purpose: low level LED functions
 * Note(s):
 *----------------------------------------------------------------------------
 * This file is part of the uVision/ARM development tools.
 * This software may only be used under the terms of a valid, current,
 * end user licence from KEIL for a compatible version of KEIL software
 * development tools. Nothing else gives you the right to use this software.
 *
 * This software is supplied "AS IS" without warranties of any kind.
 *
 * Copyright (c) 2011 Keil - An ARM Company. All rights reserved.
 *----------------------------------------------------------------------------*/

#include "STM32F4xx.h"
#include "LED.h"

const unsigned long led_mask[] = {1UL << 2, 1UL << 3, 1UL << 8, 1UL << 10};

/*----------------------------------------------------------------------------
  initialize LED Pins
 *----------------------------------------------------------------------------*/
void LED_Init (void) {

  RCC->AHB1ENR  |= ((1UL <<  0) );         /* Enable GPIOD clock                */

  GPIOA->MODER    &= ~((3UL << 2*2) |
                       (3UL << 2*3) |
                       (3UL << 2*8) |
                       (3UL << 2*10)  );   /* PA.2,3,8,10 are output               */
  GPIOA->MODER    |=  ((1UL << 2*2) |
                       (1UL << 2*3) |
                       (1UL << 2*8) |
                       (1UL << 2*10)  );
  GPIOA->OTYPER   &= ~((1UL <<   2) |
                       (1UL <<   3) |
                       (1UL <<   8) |
                       (1UL <<   10)  );   /* PA.2,3,8,10 are output Push-Pull     */
  GPIOA->OSPEEDR  &= ~((3UL << 2*2) |
                       (3UL << 2*3) |
                       (3UL << 2*8) |
                       (3UL << 2*10)  );   /* PA.2,3,8,10 is 50MHz Fast Speed     */
  GPIOA->OSPEEDR  |=  ((2UL << 2*2) |
                       (2UL << 2*3) |
                       (2UL << 2*8) |
                       (2UL << 2*10)  );
  GPIOA->PUPDR    &= ~((3UL << 2*2) |
                       (3UL << 2*3) |
                       (3UL << 2*8) |
                       (3UL << 2*10)  );   /* PA.2,3,8,10 are Pull up              */
  GPIOA->PUPDR    |=  ((1UL << 2*2) |
                       (1UL << 2*3) |
                       (1UL << 2*8) |
                       (1UL << 2*10)  );
}

/*----------------------------------------------------------------------------
  Function that turns on requested LED
 *----------------------------------------------------------------------------*/
void LED_On (unsigned int num) {

  if (num < LED_NUM) {
    GPIOA->BSRRL = led_mask[num];
  }
}

/*----------------------------------------------------------------------------
  Function that turns off requested LED
 *----------------------------------------------------------------------------*/
void LED_Off (unsigned int num) {

  if (num < LED_NUM) {
    GPIOA->BSRRH = led_mask[num];
  }
}

/*----------------------------------------------------------------------------
  Function that outputs value to LEDs
 *----------------------------------------------------------------------------*/
void LED_Out(unsigned int value) {
  int i;

  for (i = 0; i < LED_NUM; i++) {
    if (value & (1<<i)) {
      LED_On (i);
    } else {
      LED_Off(i);
    }
  }
}
