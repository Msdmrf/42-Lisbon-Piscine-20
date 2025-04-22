/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:18:55 by migusant          #+#    #+#             */
/*   Updated: 2025/02/28 11:33:22 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *p)
{
	*p = 42;
	printf("The address of the pointer p is %p\n", &p);
}

int main()
{
	int	n;
	
	n = 1492;
	printf("Before -> %d\n", n);
	ft_ft(&n);
	printf("After -> %d\n", n);
	return 0;
}
