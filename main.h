#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct structprint - structure containing
 * @type: the location and method to translate data to characters.
 * @f: print function for specific type.
 *
 * Return: int.
 */

typedef struct fmt
{
	char *type;
	int (*f)(char *format, va_list);
} form_spec;

int _putchar(char ch);
int _puts(char *string);
int printstr(char *format, va_list pa);
int _printf(const char *format, ...);
int printocta(char *format, va_list);
int print_int(va_list numbers);
int ch(va_list charact);
int print_op(const char *format, format_spec *struct_arr, va_list list);
int _strlen(char *string);
int u_int(va_list number);
int _rot13(va_list rot);
int _bin(va_list num);

#endif
