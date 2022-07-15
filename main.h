#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print - identifies the symbol and fuctions to use
 * @symbol: the symbol to call function
 * @f: the function to be called
 */

typedef struct print
{
	char *symbol;
	int (*f)(va_list);
} print_t;

int parser(const char *format, print_t f_list[], va_list arg_list);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list);
int rot13(va_list);
<<<<<<< HEAD
int unsigned_integer(va_list);
=======
int usinged_integer(va_list);
>>>>>>> parent of 594f979... print unsigned int, octal, heexa and Hexa
int print_octal(va_list list);
int print_hex(va_list list);
int print_hexX(va_list);

unsigned int base_length(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *scr, unsigned int n);
int print_unsigned_number(unsigned int);

#endif /* MAIN_H */
