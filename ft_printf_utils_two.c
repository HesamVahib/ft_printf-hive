/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_two.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvahib <hvahib@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:32:15 by hvahib            #+#    #+#             */
/*   Updated: 2024/12/03 20:48:30 by hvahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*s_copy;
	int		i;

	s_len = 0;
	while (s[s_len++] != '\0')
		;
	s_copy = (char *)malloc(s_len * sizeof(char));
	if (s_copy == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		s_copy[i] = s[i];
		i++;
	}
	s_copy[i] = '\0';
	return (s_copy);
}
