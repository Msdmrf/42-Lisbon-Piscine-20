/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joade-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:52:20 by joade-so          #+#    #+#             */
/*   Updated: 2025/03/09 20:40:10 by joade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int 	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 21;
	b = 11;

	ft_div_mod(a, b, &mod, &div);
	printf("divisao %d\n", div);
	printf("resto da divisao %d\n", mod);
}*/
