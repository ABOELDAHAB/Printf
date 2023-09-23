#include "main.h"

/**
 * test_hexa - print args of int
 * @bb: parameter
 * Return: Always 0.
 */
int test_hexa(va_list bb)
{
int b;
int i = 0;

b = va_arg(bb, int);
i = 1 + hexa(b);
return (i);
}
