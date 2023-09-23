#include "main.h"

/**
 * test_str - Entry point
 * @ss: parameter
 * Return: Always 0.
 */
int test_str(va_list ss)
{
char *s;
int i = 0;

s = va_arg(ss, char*);
i = 1 + str(s);
return (i);
}
