#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
<<<<<<< HEAD
#include <unistd.h>


int _printf(const char *format, ...);
int pr(char c);
void deci(int b);

=======
>>>>>>> 190f55e2b0873fc22f87117c46526b1aaf77c777

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
