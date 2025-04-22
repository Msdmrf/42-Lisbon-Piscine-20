/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-so <jdias-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:13:55 by jdias-so          #+#    #+#             */
/*   Updated: 2025/03/18 20:52:53 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = (max - min);
	array = malloc (range * sizeof(int));
	if (array == NULL)
		return (NULL);
	while (range > 0)
	{
		array[i] = min;
		min ++;
		i++;
		range--;
	}
	return (array);
}

int main ()
{
	int min = -1;
	int max = 4;
	int *array;
	int i = 0;
	array = ft_range(min, max);
	if (array == NULL)
	{
		printf("Erro: min é maior ou igual a max \n");
		return 1;
	}
	printf("Array de %d até %d (excluindo %d):\n", min, max, max);
	while (i < (max - min))
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	free(array);
	return 0;
}
