/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mceia-e- <mceia-e-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 16:24:35 by mceia-e-          #+#    #+#             */
/*   Updated: 2025/03/06 13:52:45 by mceia-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	c;
	int	d;

	c = 52;
	d = 7;
	ft_ultimate_div_mod(&c, &d);
	printf("The division is %d, and the remainder is %d\n", c, d);
} */
