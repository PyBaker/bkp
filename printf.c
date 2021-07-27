#include <limits.h>
#include <stdio.h>
#include "holberton.h"
#include <stdarg.h>
#include <string.h>

int _printf (const char *format, ...)
{
   va_list arg;
   int done;

   va_start (arg, format);
   done = vfprintf (stdout, format, arg);
   va_end (arg);

   return done;
}

int main(void)
{
	char b = 'A';
	char name[]="Siphiii";
	int number = 1;
	int to_baseten = 35;

	_printf("My name is %s and i will get an %c %%", name, b);
	_printf("\nMy number is %d\n", number);
	_printf("My address is %i", to_baseten);
	return(0);
}
