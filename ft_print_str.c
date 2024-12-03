/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvahib <hvahib@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:38:00 by hvahib            #+#    #+#             */
/*   Updated: 2024/12/03 14:56:28 by hvahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	size_t	len;
	char	*s;
	char	*start;

	if (!str)
	{
		if (ft_putstr_fd("(null)", 1) < 0)
			return (-1);
		return (6);
	}
	len = ft_strlen(str);
	s = (char *)malloc((len + 1) * sizeof(char));
	if (!s)
		return (0);
	start = s;
	ft_memcpy(s, str, len);
	s[len] = '\0';
	ft_putstr_fd(start, 1);
	free(start);
	return (len);
}
