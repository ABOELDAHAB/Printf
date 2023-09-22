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
int i = 0, ii = 0, j;
char dod;
va_list args;
va_start(args, format);

if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
for (i = 0; format[i] != '\0'; i++)
{
for (j = 0; j < 4; j++)
{
if (((format[i] == xm[j].mix[0]) && (format[i + 1] == xm[j].mix[1]))
&& ((format[i] == xm[j].mix[0]) && (format[i + 1] == xm[j].mix[1])))
{
xm[j].func(args);
ii = i + 1;
}
else if (((format[i - 1] != xm[j].mix[0]) && (format[i] != xm[j].mix[1]))
&& ((format[i] != xm[j].mix[0]) && (format[i + 1] != xm[j].mix[1])))
{
dod = format[i];
ii = i + 1;
}
else
dod = '\0';
}
if ((dod != '\0') && (format[i] != '%%')
&& (format[i + 1] != '%%'))
pr(dod);
}
va_end(args);
return (ii);
}
