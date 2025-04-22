/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joade-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:23:10 by joade-so          #+#    #+#             */
/*   Updated: 2025/03/10 10:25:25 by joade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	resto;

	div = *a / *b;
	resto = *a % *b;
	*a = div;
	*b = resto;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 7;
	ft_ultimate_div_mod(&a, &b);
	printf ("divisao %d\n", a);
	printf ("resto em b%d\n", b);
}*/
