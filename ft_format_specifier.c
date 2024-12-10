/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvahib <hvahib@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:43:50 by hvahib            #+#    #+#             */
/*   Updated: 2024/12/10 18:34:12 by hvahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_specifier(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar_fd(va_arg(args, int), 1);
	else if (format == 's')
		len += ft_print_str((char *) va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		len += ft_print_nbr(va_arg(args, int));
	else if (format == '%')
		len += ft_putchar_fd('%', 1);
	else if (format == 'u')
		len += ft_print_unsnbr(va_arg(args, int));
	else if (format == 'p')
		len += ft_print_ptr(va_arg(args, uintptr_t));
	else if (format == 'x' || format == 'X')
		len += ft_print_hex(va_arg(args, unsigned int), format);
	else
	{
		len += ft_putchar_fd('%', 1);
		len += ft_putchar_fd(format, 1);
	}
	return (len);
}
