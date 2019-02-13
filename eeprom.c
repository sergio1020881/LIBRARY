<<<<<<< HEAD
/*************************************************************************
Title:    eeprom wrapper
Author:   Sergio Manuel Santos <sergio.salazar.santos@gmail.com>
File:     $Id: eeprom.c,v 0.2 2014/04/12 00:00:00 sergio Exp $
Software: AVR-GCC 4.1, AVR Libc 1.4.6 or higher
Hardware: ATmega128 at 16 Mhz, 
License:  GNU General Public License        
DESCRIPTION:
USAGE:
NOTES:
LICENSE:
    Copyright (C) 2014
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
COMMENT:
	Very Stable
*************************************************************************/
/*
** library
*/
#include "eeprom.h"
/*
** constant and macro
*/
/*
** variable
*/
/*
** procedure and function header
*/
/*
** procedure and function
*/
EEPROM EEPROMenable(void){
	EEPROM eeprom;
	eeprom.read_byte=eeprom_read_byte;
	eeprom.write_byte=eeprom_write_byte;
	eeprom.update_byte=eeprom_update_byte;
	eeprom.read_word=eeprom_read_word;
	eeprom.write_word=eeprom_write_word;
	eeprom.update_word=eeprom_update_word;
	//eeprom.read_dword=eeprom_read_dword;
	eeprom.write_dword=eeprom_write_dword;
	eeprom.write_dword=eeprom_write_dword;
	//eeprom.read_float=eeprom_read_float;
	eeprom.write_float=eeprom_write_float;
	eeprom.update_float=eeprom_update_float;
	eeprom.read_block=eeprom_read_block;
	eeprom.write_block=eeprom_write_block;
	eeprom.update_block=eeprom_update_block;
	return eeprom;
}
/*
** interrupt
*/
/***EOF***/
=======
/*************************************************************************
2-EEPROM API START (wrapper)
*************************************************************************/
/***preamble inic***/
/*
** library
*/
#include "eeprom.h"
/***preamble inic***/
/*
** constant and macro
*/
/*
** variable
*/
/*
** procedure and function header
*/
/*
** procedure and function
*/
EEPROM EEPROMenable(void){
	EEPROM eeprom;
	eeprom.read_byte=eeprom_read_byte;
	eeprom.write_byte=eeprom_write_byte;
	eeprom.update_byte=eeprom_update_byte;
	eeprom.read_word=eeprom_read_word;
	eeprom.write_word=eeprom_write_word;
	eeprom.update_word=eeprom_update_word;
	//eeprom.read_dword=eeprom_read_dword;
	eeprom.write_dword=eeprom_write_dword;
	eeprom.write_dword=eeprom_write_dword;
	//eeprom.read_float=eeprom_read_float;
	eeprom.write_float=eeprom_write_float;
	eeprom.update_float=eeprom_update_float;
	eeprom.read_block=eeprom_read_block;
	eeprom.write_block=eeprom_write_block;
	eeprom.update_block=eeprom_update_block;
	return eeprom;
}
/*
** interrupt
*/
/*************************************************************************
EEPROM API END
*************************************************************************/
>>>>>>> de2a0e3c69d79501f78d6430c9d7ca8dab5fd5c2
