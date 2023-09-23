#include "main.h"

/**
 * test_deci - print args of int
 * @bb: parameter
 * Return: Always 0.
 */
int test_deci(va_list bb)
{
int b;
int i = 0;

b = va_arg(bb, int);
i = 1 + deci(b);
return (i);
}
