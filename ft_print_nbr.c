/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvahib <hvahib@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:12:31 by hvahib            #+#    #+#             */
/*   Updated: 2024/11/27 20:31:57 by hvahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int number)
{
	int		len;
	int		num;
	char	*a_num;

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
	a_num = ft_itoa(num);
	if (!a_num)
		return (0);
	ft_putstr_fd(a_num, 1);
	free(a_num);
	return (len);
}
