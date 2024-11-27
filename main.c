/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvahib <hvahib@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:01:00 by hvahib            #+#    #+#             */
/*   Updated: 2024/11/27 21:03:37 by hvahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	unsigned int	x;
	unsigned int	y;
	int				*ptr;
	int				i;

	x = 42;
	y = -142;
	ptr = &x;
	i = ft_printf("This is the address of x: %p and y: %p\n", &x, &y);
	i += ft_printf("and hex x in x: %x, and y in X is: %X\n", x, x);
	printf("len ft is: %i\n", i);
	i = printf("This is the address of x: %p and y: %p\n", &x, &y);
	i += printf("and hex x in x: %x, and y in X is: %X\n", x, x);
	printf("len normal is: %i\n", i);
	i = ft_printf("Salam Hesa%c hehe %s. and this is signed number: %d, and this is unsigned number: %i, and percent: %%\n", 'm', "ferfere", -123, 124);
	printf("len ft is: %i\n", i);
	i = printf("Salam Hesa%c hehe %s. and this is signed number: %d, and this is unsigned number: %i, and percent: %%\n", 'm', "ferfere", -123, 124);
	printf("len normal is: %i\n", i);
	printf("Char: %c, String: %s, Pointer: %p, Signed: %d, Unsigned: %u, Hex: %x, Percent: %%\n", 'A', "Test", &x, -123, 123, 255);
	return (0);
}
