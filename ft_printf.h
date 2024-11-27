/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvahib <hvahib@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:40:45 by hvahib            #+#    #+#             */
/*   Updated: 2024/11/27 20:59:44 by hvahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>
# include "libft/libft.h"

void	ft_format(char *str, char c);
int		ft_format_specifier(va_list args, const char format);
int		ft_print_str(char *str);
int		ft_print_nbr(int number);
int		ft_print_unsnbr(unsigned int number);
int		ft_print_ptr(uintptr_t ptr);
int		ft_print_hex(unsigned int num, const char format);
int		ft_printf(const char *str, ...);

#endif
