#include "main.h"

/**
 * test_char - Entry point
 * @cc: parameter
 * Return: Always 0.
 */
int test_char(va_list cc)
{
int i = 0;
char c;

c = va_arg(cc, int);
i = 1 + pr(c);
return (i);
}
