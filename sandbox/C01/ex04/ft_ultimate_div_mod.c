/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:54:17 by migusant          #+#    #+#             */
/*   Updated: 2025/03/02 17:14:01 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	
	if (*b != 0)
	{
		temp = *a;
		*a = *a / *b;
		*b = temp % *b;
	}
}

int main()
{
	int	a = 22;
	int	b = 3;

	printf("The values of a and b before ft_ultimate_div_mod were %d and %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("The values of a and b after ft_ultimate_div_mod are %d and %d\n", a, b);
	return 0;
}
