#include "main.h"

/**
 * test_STR - Entry point
 * @ss: parameter
 * Return: Always 0.
 */
int test_STR(va_list ss)
{
char *s;
int i = 0;

s = va_arg(ss, char*);
i = 1 + STR(s);
return (i);
}
