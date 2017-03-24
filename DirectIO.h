/* Project: Direct digital pin access for Arduino UNO.
 * File: DirectIO.h
 * Description: Manipulate digital IO pins directly. Depending
 *     method used can be much faster than digitalWrite().
 *
 * Copyright (C) 2014 Marc Symonds
 * All rights reserved.
 *
 * This software may be used and redistributed, with or without
 * modification, as long as it is understood that this software
 * is provided as-is without any explicit or implied warranties
 * of merchant-ability or fitness of purpose.
 */

#ifndef DirectIO_h
#define DirectIO_h

#include "Arduino.h"

/* These are about 4 times faster than digitalWrite(); */

void DIO_SetPin0(boolean);
void DIO_SetPin1(boolean);
void DIO_SetPin2(boolean);
void DIO_SetPin3(boolean);
void DIO_SetPin4(boolean);
void DIO_SetPin5(boolean);
void DIO_SetPin6(boolean);
void DIO_SetPin7(boolean);
void DIO_SetPin8(boolean);
void DIO_SetPin9(boolean);
void DIO_SetPin10(boolean);
void DIO_SetPin11(boolean);
void DIO_SetPin12(boolean);
void DIO_SetPin13(boolean);

void DIO_SetPinNull(boolean);

void DIO_SetPin(int pin, boolean state);

typedef void (*DIO_SetPinFPtr)(boolean);

DIO_SetPinFPtr DIO_GetSetPinFunction(byte);


/* These are about 30 times faster than using digitalWrite(); */

static inline void PIN0H() { PORTD = PORTD | B00000001; }
static inline void PIN0L() { PORTD = PORTD & B11111110; }

static inline void PIN1H() { PORTD = PORTD | B00000010; }
static inline void PIN1L() { PORTD = PORTD & B11111101; }

static inline void PIN2H() { PORTD = PORTD | B00000100; }
static inline void PIN2L() { PORTD = PORTD & B11111011; }

static inline void PIN3H() { PORTD = PORTD | B00001000; }
static inline void PIN3L() { PORTD = PORTD & B11110111; }

static inline void PIN4H() { PORTD = PORTD | B00010000; }
static inline void PIN4L() { PORTD = PORTD & B11101111; }

static inline void PIN5H() { PORTD = PORTD | B00100000; }
static inline void PIN5L() { PORTD = PORTD & B11011111; }

static inline void PIN6H() { PORTD = PORTD | B01000000; }
static inline void PIN6L() { PORTD = PORTD & B10111111; }

static inline void PIN7H() { PORTD = PORTD | B10000000; }
static inline void PIN7L() { PORTD = PORTD & B01111111; }

static inline void PIN8H() { PORTB = PORTB | B00000001; }
static inline void PIN8L() { PORTB = PORTB & B11111110; }

static inline void PIN9H() { PORTB = PORTB | B00000010; }
static inline void PIN9L() { PORTB = PORTB & B11111101; }

static inline void PIN10H() { PORTB = PORTB | B00000100; }
static inline void PIN10L() { PORTB = PORTB & B11111011; }

static inline void PIN11H() { PORTB = PORTB | B00001000; }
static inline void PIN11L() { PORTB = PORTB & B11110111; }

static inline void PIN12H() { PORTB = PORTB | B00010000; }
static inline void PIN12L() { PORTB = PORTB & B11101111; }

static inline void PIN13H() { PORTB = PORTB | B00100000; }
static inline void PIN13L() { PORTB = PORTB & B11011111; }


/* The inline functions above are as fast as the code below. */

#define PIN13Hi PORTB = PORTB | B00100000
#define PIN13Li PORTB = PORTB & B11011111

#define PIN13Ha asm("SBI 5, 5\n")
#define PIN13La asm("CBI 5, 5\n")

#endif
