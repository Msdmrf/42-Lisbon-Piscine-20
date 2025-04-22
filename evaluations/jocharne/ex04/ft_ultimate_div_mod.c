/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocharne <jocharne@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:40:14 by jocharne          #+#    #+#             */
/*   Updated: 2025/03/13 17:58:44 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	resto;

	result = (*a / *b);
	resto = (*a % *b);
	*a = result;
	*b = resto;
}
int	main()
{
	int a;
	int b;
	a = 13;
	b = 56;
	printf("Antes da função: a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Depois da função: a = %d, b = %d\n", a, b);
	return 0;
}
