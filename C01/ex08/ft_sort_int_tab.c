/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 20:48:45 by migusant          #+#    #+#             */
/*   Updated: 2025/03/02 20:55:54 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		size--;
	}
}

//int main()
//{
//	int	arr[] = {3, 1, 5, 0, 4, 2, 8, 9, 6, 7};
//	int	size = 10;
//	int	i = 0;
//	int	j = 0;
//
//	printf("Array before function ft_sort_int_tab:\n");
//	while (i < size)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	printf("\n");
//
//	ft_sort_int_tab(arr, size);
//	
//	printf("Array after function ft_sort_int_tab:\n");
//	while (j < size)
//	{
//		printf("%d ", arr[j]);
//		j++;
//	}
//	printf("\n");
//	return 0;
//}
