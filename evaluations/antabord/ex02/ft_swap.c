/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antabord <antabord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:59:15 by antabord          #+#    #+#             */
/*   Updated: 2025/03/11 16:58:38 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	d;

	d = *a;
	*a = *b;
	*b = d;
}

int	main(void)
{
	int	*a;
	int	*b;
	int	da;
	int	db;
	
	da = 1;
	db = 2;

	a = &da;
	b = &db;
	ft_swap(a, b);
	printf(" %d, %d", da, db);
	return (0);
}
