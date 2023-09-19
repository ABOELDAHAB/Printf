#include "main.h"

/**
 * pr - print single char
 * @c: parameter
 * Return: Always 0.
 */

int pr(char c)
{
return (write(1, &c, 1));
}
