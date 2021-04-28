#ifndef DISPLCD4VIAS_H
#define DISPLCD4VIAS_H

void dispLCD_init( void );

// Escreve uma string no display
void dispLCD( unsigned char lin, unsigned char col, const char * str );

// Escreve um número inteiro no display
void dispLCD_num(  unsigned char lin, unsigned char col,
                    int num, unsigned char tam );

// Apaga todos os caracteres no display
void dispLCD_clr( void );

#endif
