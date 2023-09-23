#include "main.h"

/**
 * test_HEXA - print args of int
 * @bb: parameter
 * Return: Always 0.
 */
int test_HEXA(va_list bb)
{
int b;
int i = 0;

b = va_arg(bb, int);
i = 1 + HEXA(b);
return (i);
}
