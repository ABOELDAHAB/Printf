#include "main.h"

/**
 * test_unsi - print args of int
 * @bb: parameter
 * Return: Always 0.
 */
int test_unsi(va_list bb)
{
int b;
int i = 0;

b = va_arg(bb, int);
i = 1 + unsi(b);
return (i);
}
