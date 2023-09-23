#include "main.h"

/**
 * test_deci - print args of int
 * @bb: parameter
 * Return: Always 0.
 */
void test_deci(va_list bb)
{
int b;

b = va_arg(bb, int);
if (b != 0)
deci(b);
}
