#include "main.h"

/**
 * _printf - print args of int
 * @format: parameter
 * Return: Always 0.
 */
int _printf(const char * const format, ...)
{
mix_t xm[] = {{"%s", test_str}, {"%i", test_deci},
{"%c", test_char}, {"%d", test_deci}};
int i = 0, len = 0, ii = 0, j, x = 0;

va_list args;
va_start(args, format);

for (i = 0; format[i] != '\0'; i++)
{
for (j = 0; j < 4 ; j++)
{
if (xm[j].mix[0] == format[i] && xm[j].mix[1] == format[i + 1])
{
xm[j].func(args);
i = i + 2;
len = len + 2;
}
else
ii = i;
}
if (format[i] != '0')
pr(format[i]);
ii++;
}
if (len >= 2)
x = len - 1;
i = ii - x;
va_end(args);
return (i);
}
