/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-so <jdias-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 13:09:21 by jdias-so          #+#    #+#             */
/*   Updated: 2025/03/18 20:57:11 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	a = max - min;
	*range = malloc(a * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < a)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (a);
}

int main(void)
{
    int *array;
    int size;
    int i = 0;

    size = ft_ultimate_range(&array, -1, 4);

    if (size == -1)
    {
        printf("Erro na alocação de memória.\n");
        return (1);
    }

    if (size == 0)
    {
        printf("Array vazio.\n");
        return (0);
    }

    while (i < size)
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
	printf("%d\n", size);
    free(array);
    return (0);
}
