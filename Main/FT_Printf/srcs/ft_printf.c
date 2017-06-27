#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/*
**	Allowed functions:
**	◦ write
**	◦ malloc
**	◦ free
**	◦ exit
**	◦ The functions of man 3 stdarg
**
**	You have to manage the following conversions: sSpdDioOuUxXcC
**	• You must manage %%
**	• You must manage the flags #0-+ and space
**	• You must manage the minimum field-width
**	• You must manage the precision
**	• You must manage the flags hh, h, l, ll, j, et z.
*/

void printPercent(const char * restrict format, int *curr, int *bytes)
{
	while (format[(*curr)] == '%')
    {
		write(1, "\%", 1);
		(*bytes)++;
		(*curr)++;
	}
}

void printChar(int *curr, int *bytes, va_list ap)
{
	char c = va_arg(ap, int);
	write(1, &c, 1);
	(*bytes)++;
	(*curr)++;
}

void printString(int *curr, int *bytes, va_list ap)
{
	char *str = va_arg(ap, char *);
	while (*str)
	{
		write(1, str++, 1);
		(*bytes)++;
	}
	(*curr)++;
}

void parseFlag(const char * restrict format, int *curr, int *bytes, va_list ap)
{
	(*curr)++; //eat leading % 
    if (format[(*curr)] == '%')
		printPercent(format, curr, bytes);
    else if (format[*curr] == 'c')
		printChar(curr, bytes, ap);
	else if (format[*curr] == 's')
		printString(curr, bytes, ap);
}


int ft_printf(const char * restrict format, ...)
{
	int *bytes;
	int *curr;
	va_list ap;
	va_start(ap, format);

	bytes = (int *)malloc(sizeof(int));
	curr = (int *)malloc(sizeof(int));
	if (!bytes || !curr)
		printf("malloc failure\n");

  	(*bytes) = 0;
    (*curr) = 0;
    while (format[(*curr)])
    {
        if (format[(*curr)] == '%')
            parseFlag(format, curr, bytes, ap);
        else
        {
            write(1, &(format[(*curr)]), 1);
        	(*bytes)++;
        	(*curr)++;
        }
        
    }
	return (*bytes);
}

int main(void)
{
	int ret;

	ft_printf("\n");
	ft_printf(" %%%% test\n");
	ret = ft_printf("printing |%%|");
	ft_printf("\n");
	printf("ret is=|%i|\n", ret);

	ft_printf("\n");
	ft_printf("\n");

	ft_printf("Char test\n");
	ft_printf("\n");
	char c;

	c = 'x';

	char d;

	d = 'y';

	ret = ft_printf("printing |%c| |%c|", c, d);	
	ft_printf("\n");
	
	printf("ret is=|%i|\n", ret);


	ft_printf("\n");
	ft_printf("\n");


	ft_printf("String test\n");
	ft_printf("\n");
	char *strng = "Hello";

	ret = ft_printf("printing |%s|", strng);	
	ft_printf("\n");
	
	printf("ret is=|%i|\n", ret);

	return (0);
}




























