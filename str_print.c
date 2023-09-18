#include "main.h"

/**
 * _printf - print args of int
 * @format: parameter
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
va_list args;
int i, j = 0;
char m;
char *mm;
while (format[j] != '\0')
j++;
va_start(args, *format);
for (i = 0; i < j; i++)
{
if ((format[i] == '%') && (format[i + 1] == 'c'))
{
m = va_arg(args, int);
pr(m);
}
else if ((format[i] == '%') && (format[i + 1] == 's'))
{mm = va_arg(args, char*);
str(mm);
}
else if (!((format[i - 1] == '%') &&
((format[i] == 'c') || (format[i] == 's'))))
pr(format[i]);
}
va_end(args);
return (i);
}
