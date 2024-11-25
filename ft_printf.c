#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"
#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
    va_list args;
    int counter = 0;
    char next;

    va_start(args, str);
    while(*str)
    {
        if (*str == '%')
        {
            counter += ft_format_specifier(args, *(str+1));
            str += 2;
        }
        ft_putchar_fd(*str, 1);
        counter++;
        str++;
    }
    
    va_end(args);
    return counter;
}

#include <stdio.h>

int main() {
    int x = 42;
    int i;
    i = ft_printf("Salam Hesa%c hehe %s. and this is signed number: %d, and this is unsigned number: %i, and precent: %%, again %u\n", 'm', "ferfere", -123, 124, -1);
    printf("len ft is: %i\n", i);
    i = printf("Salam Hesa%c hehe %s. and this is signed number: %d, and this is unsigned number: %i, and precent: %%, again %u\n", 'm', "ferfere", -123, 124, -1);
    printf("len normal is: %i\n", i);
    printf("Char: %c, String: %s, Pointer: %p, Signed: %d, Unsigned: %u, Hex: %x, Percent: %%\n",
           'A', "Test", &x, -123, 123, 255);
    return 0;
}

//va_copy