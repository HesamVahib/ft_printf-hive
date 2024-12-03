/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvahib <hvahib@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:01:00 by hvahib            #+#    #+#             */
/*   Updated: 2024/12/03 21:04:24 by hvahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	unsigned int	x;
	unsigned int	y;
	int				*ptr;
	int				h;

	x = 42;
	y = -142;
	ptr = &x;

	h = ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n");
	ft_printf("%i", h);
	printf("\n");
	h = ft_printf(" %%%% ");
	printf("\n");
	ft_printf("%i", h);
	printf("\n");
	h = printf(" %%%% ");
	printf("\n");
	printf("%i", h);
	printf("\n");
	h = printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n");
	ft_printf("%i", h);
	printf("\n");
	printf("%i", h);
	printf("\n");
	
	
	h = ft_printf("This is the address of x: %p and y: %p\n", &x, &y);
	h += ft_printf("and hex x in x: %x, and y in X is: %X\n", x, x);
	printf("len ft is: %i\n", h);
	h = printf("This is the address of x: %p and y: %p\n", &x, &y);
	h += printf("and hex x in x: %x, and y in X is: %X\n", x, x);
	printf("len normal is: %i\n", h);
	h = ft_printf("Salam Hesa%c hehe %s. and this is signed number: %d, and this is unsigned number: %i, and percent: %%\n", 'm', "ferfere", -123, 124);
	printf("len ft is: %i\n", h);
	h = printf("Salam Hesa%c hehe %s. and this is signed number: %d, and this is unsigned number: %i, and percent: %%\n", 'm', "ferfere", -123, 124);
	printf("len normal is: %i\n", h);
	//printf("Char: %c, String: %s, Pointer: %p, Signed: %d, Unsigned: %u, Hex: %x, Percent: %%\n", 'A', "Test", &x, -123, 123, 255);
	return (0);
}
