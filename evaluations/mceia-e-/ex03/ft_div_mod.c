/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mceia-e- <mceia-e-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 16:06:06 by mceia-e-          #+#    #+#             */
/*   Updated: 2025/03/06 17:39:16 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	c;
	int	d;
	int	div;
	int	mod;

	c = 52;
	d = 7;
	ft_div_mod(c, d, &div, &mod);
	printf("%d divided by %d is %d, and the remainder is %d\n", c, d, div, mod);
} 
