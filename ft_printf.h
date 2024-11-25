#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"

void    ft_format(char  *str, char  c);
int ft_format_specifier(va_list args, const char format);
int ft_print_str(char *str);
int ft_print_nbr(int    number);

#endif