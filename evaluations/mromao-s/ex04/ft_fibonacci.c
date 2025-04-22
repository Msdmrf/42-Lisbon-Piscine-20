/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:46:09 by mromao-s          #+#    #+#             */
/*   Updated: 2025/03/10 22:10:43 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index)
{
	int	tmp;
	int	min;
	int	max;
	int	i;

	min = 0;
	max = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	i = 0;
	while (++i < index)
	{
		tmp = min + max;
		min = max;
		max = tmp;
	}
	return (max);
}

int	main(void) {
	for (int i = 0; i < 100; i++)
		printf("output for number %i is %i\n", i, ft_fibonacci(i));
	return (0);
}
