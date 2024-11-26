#include "ft_printf.h"

void    ptr_writer()
{

}

int ft_print_ptr(unsigned long long ptr)
{
    int len;

    len = 0;
    len += ft_print_str("0x");
    if (ptr == 0)
        len += ft_print_str("0");
    else
    {
        ptr_writer(ptr);
    }
    
}