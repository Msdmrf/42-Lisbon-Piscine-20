/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mceia-e- <mceia-e-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:24:29 by mceia-e-          #+#    #+#             */
/*   Updated: 2025/03/06 13:51:33 by mceia-e-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}
/*
int	main(void)
{
	int	c = 22;
	int	d = 23;

	printf("Before: a is %d, and b is %d\n", c, d);
	ft_swap(&c, &d);
	printf("After: a is %d, and b is %d\n", c, d);
} */
