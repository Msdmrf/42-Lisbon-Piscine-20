/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocharne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:02:05 by jocharne          #+#    #+#             */
/*   Updated: 2025/03/13 18:07:35 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swapper;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swapper = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swapper;
			}
			i++;
		}
		size--;
	}
}
int main()
{
    int arr[6] = {7, 2, 9, 4, 6, 1}; // Novo array de teste
    int size = 6; // Tamanho definido manualmente

    printf("Array original: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ft_sort_int_tab(arr, size);

    printf("Array ordenado: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
