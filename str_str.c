#include "main.h"

/**
 * str - Entry point
 * @s: parameter
 * Return: Always 0.
 */
void str(char *s)
{
if (!*s)
{
return;
}
pr(*s);
str(s + 1);
}
