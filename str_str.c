#include "main.h"

/**
 * str - Entry point
 * @s: parameter
 * Return: Always 0.
 */
int str(char *s)
{
int i = 0;

if (!*s)
{
return (0);
}
pr(*s);
i = 1 + str(s + 1);
return (i);
}
