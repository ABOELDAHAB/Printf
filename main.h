#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
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
	void (*func)();
} mix_t;
void test_deci(va_list bb);
void test_str(va_list ss);
void deci(int b);
int _printf(const char *format, ...);
int pr(char c);
void test_char(va_list cc);
void str(char *s);
int str_printf(const char *format, ...);
int int_printf(const char *format, ...);
#endif
