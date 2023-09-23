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
int i = 0, j, ii = 0, len = 0;
va_list args;
char dod = ' ';
va_start(args, format);

if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
for (i = 0; format[i] != '\0'; i++)
{
for (j = 0; j < 4; j++)
{
if (((format[i] == xm[j].mix[0]) && (format[i + 1] == xm[j].mix[1]))
&& ((format[i] == xm[j].mix[0]) && (format[i + 1] == xm[j].mix[1])))

{xm[j].func(args);
len = len + 1;
}
else if (((format[i - 1] != xm[j].mix[0]) && (format[i] != xm[j].mix[1]))
&& ((format[i] != xm[j].mix[0]) && (format[i + 1] != xm[j].mix[1])))
{
dod = format[i];

}
else
dod = '\0';

}
if ((dod != '\0'))
pr(dod);
ii = i + 1;
}
if (len >= 2)
len = len - 2;
i = ii - len;
va_end(args);
return (i);
}
