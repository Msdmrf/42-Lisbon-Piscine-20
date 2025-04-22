/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antabord <antabord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:38:32 by antabord          #+#    #+#             */
/*   Updated: 2025/03/03 11:30:53 by antabord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	e;
	int	f;

	e = *a / *b;
	f = *a % *b;
	*a = e;
	*b = f;
}

/*int	main(void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;

	c = 6;
	d = 4;
	
	a = &c;
	b = &d;
	ft_ultimate_div_mod(a, b);
	printf(" %d, %d", *a, *b);
	return (0);
}*/
