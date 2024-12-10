/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvahib <hvahib@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:40:45 by hvahib            #+#    #+#             */
/*   Updated: 2024/12/03 20:41:31 by hvahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>
# include <limits.h>

void	ft_format(char *str, char c);
int		ft_format_specifier(va_list args, const char format);
int		ft_print_str(char *str);
int		ft_print_nbr(int number);
int		ft_print_unsnbr(unsigned int number);
int		ft_print_ptr(uintptr_t ptr);
int		ft_print_hex(unsigned int num, const char format);
int		ft_printf(const char *str, ...);
int		ft_putchar_fd(char c, int fd);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_putstr_fd(char *s, int fd);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);
char	*calculation_num(char *num, int len, int n, int sign);
char	*ft_strdup(const char *s);

#endif
