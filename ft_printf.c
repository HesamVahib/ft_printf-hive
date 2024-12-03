/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvahib <hvahib@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:39:00 by hvahib            #+#    #+#             */
/*   Updated: 2024/12/03 20:42:07 by hvahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		counter;

	va_start(args, str);
	counter = 0;
	if (!str)
		return (-1);
	while (*str)
	{
		if (*str == '%')
		{
			counter += ft_format_specifier(args, *(str + 1));
			str += 2;
		}
		if (*str != '\0' && *str != '%')
		{
			if (ft_putchar_fd(*str, 1) < 0)
				return (-1);
			counter++;
			str++;
		}
	}
	va_end(args);
	return (counter);
}
