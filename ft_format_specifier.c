#include "ft_printf.h"

int ft_print_unsnbr(int number)
{
    int len;

    len = 0;
    if (number >= 0)
    {
        len = ft_print_nbr(number);
        return len;
    }
    

}

int ft_format_specifier(va_list args, const char format)
{
    int len;

    len = 0;
    if  (format == 'c')
    {
        ft_putchar_fd(va_arg(args, int), 1);
        len += 1;
    }
    else if (format == 's')
    {
        len += ft_print_str((char *) va_arg(args, char*));
    }
    else if (format == 'd' || format == 'i')
    {
        len += ft_print_nbr(va_arg(args, int));
    }
    else if (format == '%')
    {
        ft_putchar_fd('%', 1);
        len += 1;
    }
    else if (format == 'u')
    {
        len += ft_print_unsnbr(va_arg(args, int));
    }
    else
    {
        ft_putstr_fd("Nothing identified", 1);
    }
    return len;
}