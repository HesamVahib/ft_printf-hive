/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvahib <hvahib@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:20:46 by hvahib            #+#    #+#             */
/*   Updated: 2024/12/03 21:17:56 by hvahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr_len_calc(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num /= 16;
	}
	return (len);
}

void	ptr_writer(uintptr_t num)
{
	if (num >= 16)
	{
		ptr_writer(num / 16);
		ptr_writer(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(uintptr_t ptr)
{
	int			len;

	len = 0;
	if (!ptr)
	{
		if (ft_putstr_fd("(nil)", 1) < 0)
			return (-1);
		return (5);
	}
	len += ft_print_str("0x");
	if (ptr == 0)
		len += ft_print_str("0");
	else
	{
		ptr_writer(ptr);
		len += ptr_len_calc(ptr);
	}
	return (len);
}
