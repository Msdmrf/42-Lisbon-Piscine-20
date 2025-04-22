/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocharne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:55:36 by jocharne          #+#    #+#             */
/*   Updated: 2025/03/04 14:38:24 by jocharne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	resto;
	int	resultado;

	resultado = (a / b);
	resto = (a % b);
	*div = resultado;
	*mod = resto;
}
/*int	main()
{
	int	a = 15;
	int	b = 3;
  	int	div;
	int 	mod;
	ft_div_mod(a, b, &div, &mod);
	printf("resultado: %d, resto: %d\n", div, mod);
	return (0);
}*/
