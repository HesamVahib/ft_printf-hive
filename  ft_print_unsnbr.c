#include "ft_printf.h"

int uns_len(unsigned    int n)
{
    size_t  len;

    len = 0;
    while(n != 0)
    {
        n = n/10;
        len++;
    }
    return  len;
}

char    *uns_itoa(unsigned  int n)
{
    int len;
    char    *num;

    len = uns_len(n);
    num = (char *)malloc((len+1) * sizeof(char));
    if (!num)
        return (0);
    num[len] = '\0';
    while(len >= 0)
    {
        len--;
        num[len] = (n % 10) + 48;
        n /= 10;
    }
    return num;
}

int ft_print_unsnbr(unsigned int number)
{
    int len;
    char    *num;

    if (number == 0)
        len += ft_print_nbr(number);
    else
    {
    len = 0;
    num = uns_itoa(number);
    len += ft_print_str(num);
    }
    return len;
}
