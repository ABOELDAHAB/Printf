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
 * @s: parameter
 * Return: Always 0.
 */
void _printf(char *s, ...)
{
va_list args;
int i, j = 0, count = 0, m;
while (s[j] != '\0')
j++;
for (i = 0; i < j; i++)
{
if ((s[i] == '%') && ((s[i + 1] == 'd' || s[i + 1] == 'i')))
count++;
}
va_start(args, *s);
for (i = 0; i < j; i++)
{
if ((s[i] == '%') && ((s[i + 1] == 'd' || s[i + 1] == 'i')))
{
m = va_arg(args, int);
deci(m);
}}
va_end(args);
}

