#include "main.h"

/**
 * _printf - print args of int
 * @format: parameter
 * Return: Always 0.
 */
int _printf(const char * const format, ...)
{
mix_t xm[] = {{"%s", test_str}, {"%i", test_deci}, {"%d", test_deci}}
int i, j, x;
va_list args;
va_start(args, format)

for (i = 0; format != '\0'; i++)
{
for (j = 0; j < 3; j++)
{
if ((format[i] == xm[j].mix[0]) && (format[i + 1] == xm[j].mix[1]))
xm[j].func;
else if (!((format[i - 1] == xm[j].mix[0]) && (format[i] == xm[j].mix[1])))
pr(format[i]);
}}
va_end(args);
return (i);
}
