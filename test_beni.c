#include "main.h"

/**
 * test_beni - print args of int
 * @bb: parameter
 * Return: Always 0.
 */
int test_beni(va_list bb)
{
int b;
int i = 0;

b = va_arg(bb, int);
i = 1 + beni(b);
return (i);
}
