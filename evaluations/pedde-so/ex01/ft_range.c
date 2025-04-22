/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:26:37 by pedde-so          #+#    #+#             */
/*   Updated: 2025/03/10 11:41:17 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

/* prototypes */
int	*ft_range(int min, int max);
/*
int main (void)
{
	int *ptr = ft_range(10, 13);
	printf("%c", '[');
	while(*ptr)
	{
		printf("%d, ", *ptr);
		ptr++;
	}
	printf("%c", ']');
}
*/

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	ptr = NULL;
	if (min >= max)
		return (ptr);
	ptr = (int *)malloc((max - min) * sizeof(int));
	if (ptr == NULL)
		return (ptr);
	i = 0;
	while (min < max)
	{
		*(ptr + i) = min;
		i++;
		min++;
	}
	return (ptr);
}
