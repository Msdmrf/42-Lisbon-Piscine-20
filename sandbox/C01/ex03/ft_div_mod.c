/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 15:20:01 by migusant          #+#    #+#             */
/*   Updated: 2025/03/02 16:30:22 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int main()
{
	int	a = 200;
	int	b = 11;
	int	div;
	int	mod;
	
	ft_div_mod(a, b, &div, &mod);
	printf("Value of div = %d\n", div);
	printf("Value of mod = %d\n", mod);
	return 0;
		
}
