#include "main.h"

/**
 * test_char - Entry point
 * @cc: parameter
 * Return: Always 0.
 */
void test_char(va_list cc)
{
char c;

c = va_arg(cc, int);
pr(c);
}
