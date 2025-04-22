/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:41:39 by pedde-so          #+#    #+#             */
/*   Updated: 2025/03/13 16:17:04 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/* prototypes */
int	ft_ultimate_range(int **range, int min, int max);
int	ft_range_size(int a, int b);

int main(void)
{
    int *arr;
    int size;
    int i;

    size = ft_ultimate_range(&arr, -30, 30);
    if (size == -1)
    {
        printf("Memory allocation failed\n");
        return (1);
    }
    if (size == 0)
    {
        printf("Invalid range\n");
        return (0);
    }
    printf("Array size: %d\n", size);
    printf("Elements: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return (0);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;
	int	len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = ft_range_size(min, max);
	ptr = (int *)(malloc((len * sizeof(int))));
	if (ptr == NULL)
	{
		*range = ptr;
		return (-1);
	}
	i = 0;
	while (i < len)
	{
		*(ptr + i) = min;
		min++;
		i++;
	}
	range[0] = ptr;
	return (len);
}

int	ft_range_size(int a, int b)
{
	long	result;

	result = 0;
	result = a - b;
	if (result < 0)
		return (-result);
	return (result);
}
