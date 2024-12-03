/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_one.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvahib <hvahib@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:32:15 by hvahib            #+#    #+#             */
/*   Updated: 2024/12/03 20:47:03 by hvahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c, int fd)
{
	if (write(fd, &c, 1) < 0)
		return (-1);
	return (1);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dest == src || !n)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*d++ = *s++;
		i++;
	}
	return (dest);
}

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_putchar_fd(s[i], fd) < 0)
			return (-1);
		i++;
	}
	return (i);
}

char	*calculation_num(char *num, int len, int n, int sign)
{
	num[len] = '\0';
	while (len > 0)
	{
		num[len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
		if (len == 0 && sign == -1)
			num[0] = '-';
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		sign;
	int		mock_n;
	size_t	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = 1;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n = -n;
		len = 2;
	}
	mock_n = n;
	while (mock_n > 9)
	{
		mock_n /= 10;
		len++;
	}
	num = (char *)malloc((len + 1) * sizeof(char));
	if (num == NULL)
		return (NULL);
	return (calculation_num(num, len, n, sign));
}
