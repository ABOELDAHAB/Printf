#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>

/**
 * struct tk - Short description
 * @tk: the operator to ve examined
 * @f: pointer to function.
 *
 * Description: Longer description
 */
typedef struct tk
{
} tk_t;

void deci(int b);
int _printf(const char *format, ...);
int pr(char c);
void str(char *s);
int str_printf(const char *format, ...);
int int_printf(const char *format, ...);
#endif
