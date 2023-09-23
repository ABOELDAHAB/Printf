#include "main.h"

/**
 * test_octi - print args of int
 * @bb: parameter
 * Return: Always 0.
 */
int test_octi(va_list bb)
{
int b;
int i = 0;

b = va_arg(bb, int);
i = 1 + octi(b);
return (i);
}
