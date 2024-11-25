#include "ft_printf.h"

int ft_print_nbr(int    number)
{
    int len;
    int num;
    char    *a_num;

    len = 0;
    num = number;
    if (number <= 0)
    {
        number = -number;
        len++;
    }

    while (number > 0)
    {
        number /= 10;
        len++;
    }
    a_num = (char *)malloc((len+1) * sizeof(char));
    if (!a_num)
        return 0;
    a_num = ft_itoa(num);
    ft_putstr_fd(a_num, 1);

    return len;
}