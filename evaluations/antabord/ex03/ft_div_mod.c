/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antabord <antabord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:14:11 by antabord          #+#    #+#             */
/*   Updated: 2025/03/05 12:10:31 by antabord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 8;
	b = 3;

	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf(" %d, %d, %d, %d", a, b, *div, *mod);
	return (0);
}*/
