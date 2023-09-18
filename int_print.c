#include "main.h"

/**
 * deci - print int
 * @b: parameter
 * Return: Always 0.
 */
void deci(int b)
{
if (b < 0)
{
b = b * -1;
pr('-');
}
if (b == 0)
return;
deci(b / 10);
pr(((b % 10) + '0'));
}

/**
 * _printf - print args of int
 * @format: parameter
 * Return: Always 0.
 */
int _pprintf(const char *format, ...)
{
va_list args;
int i, j = 0, m;
while (format[j] != '\0')
j++;
va_start(args, *format);
for (i = 0; i < j; i++)
{
if ((format[i] == '%') && ((format[i + 1] == 'd' || format[i + 1] == 'i')))
{
m = va_arg(args, int);
deci(m);
}
else if (!((format[i - 1] == '%') &&
((format[i] == 'd' || format[i] == 'i'))))
pr(format[i]);
}
va_end(args);
return (i);
}
