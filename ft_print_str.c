#include "ft_printf.h"

int ft_print_str(char *str)
{
    size_t len;
    char *s;
    char *start;

    if (!str)
        return 0;
    len = ft_strlen(str);
    s = (char *)malloc((len+1) * sizeof(char));
    if (!s)
        return 0;
    start = s;
    while(*str)
        *s++ = *str++;
    *s = '\0';
    ft_putstr_fd(start, 1);
    free (start);
    return len;
}