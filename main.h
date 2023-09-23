#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
/**
 * struct mix - Short description
 * @mix: type char pointer
 * @func: pointer to function.
 *
 * Description: Longer description
 */
typedef struct mix
{
	char *mix;
	int (*func)();
} mix_t;
int test_deci(va_list bb);
int test_str(va_list ss);
int deci(long int b);
int _printf(const char *format, ...);
int pr(char c);
int test_char(va_list cc);
int t_printf(const char * const format, ...);
int str(char *s);
int str_printf(const char *format, ...);
int int_printf(const char *format, ...);
#endif
