#include "main.h"
#include "main.h"

/**
* _printf - prints output based on th format passed
* @format: pointer to the data type passed
*
* Return: the character to be printed
*/
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0;

	form_spec op[] = {
		{"c", ch},
		{"s", printstr},
		{"d", print_int},
		{"i", print_int},
		{"u", u_int},
		{"b", _binary},
		{"R", _rot13},
		{"o", printocta},
		{"x", printhex},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(list, format);
	i = print_op(format, opss, list);
	va_end(list);

	return (i);
}
