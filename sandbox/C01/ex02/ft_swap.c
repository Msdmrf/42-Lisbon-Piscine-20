/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:31:18 by migusant          #+#    #+#             */
/*   Updated: 2025/02/28 12:56:16 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp; 
}

int main()
{
	int	a = 10;
	int	b = 20;
	printf("a = %d, b = %d\n", a, b);
	ft_swap (&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
