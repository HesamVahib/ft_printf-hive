/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvahib <hvahib@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:12:31 by hvahib            #+#    #+#             */
/*   Updated: 2024/12/03 21:23:12 by hvahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	len_num(int number, int *len)
{
	if (number <= 0)
	{
		number = -number;
		(*len)++;
	}
	while (number > 0)
	{
		number /= 10;
		(*len)++;
	}
}

int	ft_print_nbr(int number)
{
	int		len;
	int		num;
	char	*a_num;

	len = 0;
	num = number;
	len_num(number, &len);
	a_num = ft_itoa(num);
	if (!a_num)
		return (0);
	if (number == INT_MIN)
	{	
		if (ft_putstr_fd("-2147483648", 1) < 0)
			return (-1);
		free (a_num);
		return (11);
	}
	if (ft_putstr_fd(a_num, 1) < 0)
		return (-1);
	free(a_num);
	return (len);
}
