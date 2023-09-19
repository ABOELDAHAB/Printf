#include "main.h"

/**
 * test_str - Entry point
 * @ss: parameter
 * Return: Always 0.
 */
void test_str(va_list ss)
{
char *s;

s = va_args(ss, *char)
if (!*s)
{
return;
}
pr(*s);
(s + 1);
}
