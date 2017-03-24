/* Project: Direct digital pin access for Arduino UNO.
 * File: DirectIO.cpp
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

#include "Arduino.h"
#include "DirectIO.h"

/*
  Direct digital port manipulation using the PORT variables.
  About 4 times quicker than using digitalWrite().
*/

/* 
  Returns a pointer to the function that can turn set the specified port high or low.

    DIO_SetPinFPtr func;

    func = DIO_getSetPinFunction(4);
    func(true); // Set high.
    func(low); // Set low.

  You could, of course, just as easily call the DIO_set4 fuction directly.
*/

DIO_SetPinFPtr DIO_GetSetPinFunction(byte pin)
{
  switch(pin)
  {
    case 0:
      return DIO_SetPin0;
      break;
      
    case 1:
      return DIO_SetPin1;
      break;
      
    case 2:
      return DIO_SetPin2;
      break;
      
    case 3:
      return DIO_SetPin3;
      break;
      
    case 4:
      return DIO_SetPin4;
      break;
      
    case 5:
      return DIO_SetPin5;
      break;
      
    case 6:
      return DIO_SetPin6;
      break;
      
    case 7:
      return DIO_SetPin7;
      break;
      
    case 8:
      return DIO_SetPin8;
      break;
      
    case 9:
      return DIO_SetPin9;
      break;
      
    case 10:
      return DIO_SetPin10;
      break;
      
    case 11:
      return DIO_SetPin11;
      break;
      
    case 12:
      return DIO_SetPin12;
      break;

    case 13:
      return DIO_SetPin13;
  }

  return DIO_SetPinNull;
}

void DIO_SetPinNull(boolean state)
{
  // Do nothing
}

void DIO_SetPin0(boolean state)
{
  if (state)
    PIN0H();
  else
    PIN0L();
}

void DIO_SetPin1(boolean state)
{
  if (state)
    PIN1H();
  else
    PIN1L();
}

void DIO_SetPin2(boolean state)
{
  if (state)
    PIN2H();
  else
    PIN2L();
}

void DIO_SetPin3(boolean state)
{
  if (state)
    PIN3H();
  else
    PIN3L();
}

void DIO_SetPin4(boolean state)
{
  if (state)
    PIN4H();
  else
    PIN4L();
}


void DIO_SetPin5(boolean state)
{
  if (state)
    PIN5H();
  else
    PIN5L();
}

void DIO_SetPin6(boolean state)
{
  if (state)
    PIN6H();
  else
    PIN6L();
}

void DIO_SetPin7(boolean state)
{
  if (state)
    PIN7H();
  else
    PIN7L();
}

void DIO_SetPin8(boolean state)
{
  if (state)
    PIN8H();
  else
    PIN8L();
}

void DIO_SetPin9(boolean state)
{
  if (state)
    PIN9H();
  else
    PIN9L();
}

void DIO_SetPin10(boolean state)
{
  if (state)
    PIN10H();
  else
    PIN10L();
}

void DIO_SetPin11(boolean state)
{
  if (state)
    PIN11H();
  else
    PIN11L();
}

void DIO_SetPin12(boolean state)
{
  if (state)
    PIN12H();
  else
    PIN12L();
}

void DIO_SetPin13(boolean state)
{
  if (state)
    PIN13H;//();
  else
    PIN13L;//();
}

void DIO_SetPin(int pin, boolean state)
{
  if (state)
  {
    switch(pin)
    {
      case 0:
        PIN0H();
        break;
        
      case 1:
        PIN1H();
        break;
        
      case 2:
        PIN2H();
        break;
        
      case 3:
        PIN3H();
        break;
        
      case 4:
        PIN4H();
        break;
    
      case 5:
        PIN5H();
        break;
        
      case 6:
        PIN6H();
        break;
             
      case 7:
        PIN7H();
        break;
             
      case 8:
        PIN8H();
        break;
             
      case 9:
        PIN9H();
        break;
             
      case 10:
        PIN10H();
        break;
             
      case 11:
        PIN11H();
        break;
             
      case 12:
        PIN12H();
        break;
             
      case 13:
        PIN13H();
        break;
    }
  }
  else
  {
    switch(pin)
    {
      case 0:
        PIN0L();
        break;
        
      case 1:
        PIN1L();
        break;
        
      case 2:
        PIN2L();
        break;
        
      case 3:
        PIN3L();
        break;
        
      case 4:
        PIN4L();
        break;

      case 5:
        PIN5L();
        break;
        
      case 6:
        PIN6L();
        break;
             
      case 7:
        PIN7L();
        break;
             
      case 8:
        PIN8L();
        break;
             
      case 9:
        PIN9L();
        break;
             
      case 10:
        PIN10L();
        break;
             
      case 11:
        PIN11L();
        break;
             
      case 12:
        PIN12L();
        break;
             
      case 13:
        PIN13L();
        break;
    }
 }        
}
