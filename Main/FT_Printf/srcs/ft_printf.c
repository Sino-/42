#include "ft_printf.h"

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

void	reset_env(t_env *env)
{
	env->precision	= 0;
	env->octothorpe	= 0;
	env->zero		= 0;
	env->minus		= 0;
	env->plus		= 0;
	env->space		= 0;
	env->hh			= 0;
	env->h			= 0;
	env->l			= 0;
	env->ll			= 0;
	env->j			= 0;
	env->z			= 0;
}

void printPercent(t_env *env, const char * restrict format)
{
	while (format[(env->curr)] == '%')
    {
		write(1, "\%", 1);
		(env->bytes)++;
		(env->curr)++;
	}
}

void printChar(t_env *env, va_list ap)
{
	char c = va_arg(ap, int);
	write(1, &c, 1);
	(env->bytes)++;
	(env->curr)++;
}

void printString(t_env *env, va_list ap)
{
	char *str = va_arg(ap, char *);
	while (*str)
	{
		write(1, str++, 1);
		(env->bytes)++;
	}
	(env->curr)++;
}

void parseFlag(t_env *env, const char * restrict format, va_list ap)
{
	(env->curr)++; //eat leading % 
    if (format[(env->curr)] == '%')
		printPercent(env, format);
    else if (format[(env->curr)] == 'c')
		printChar(env, ap);
	else if (format[(env->curr)] == 's')
		printString(env, ap);
}

int ft_printf(const char * restrict format, ...)
{
	t_env env;
	va_list ap;
	va_start(ap, format);

	env.curr		= 0;
	env.bytes		= 0;
  	reset_env(&env);
    while (format[(env.curr)])
    {
        if (format[(env.curr)] == '%')
            parseFlag(&env, format, ap);
        else
        {
            write(1, &(format[(env.curr)]), 1);
        	(env.bytes)++;
        	(env.curr)++;
        }
        
    }
	return (env.bytes);
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
