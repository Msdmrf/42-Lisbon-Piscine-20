/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 20:14:53 by migusant          #+#    #+#             */
/*   Updated: 2025/03/02 20:30:24 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

//int main()
//{
//	int	arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int	size = 10;
//	int	i = 0;
//	int	j = 0;
//
//	printf("Array before ft_rev_int_tab function:\n");
//	while (i < size)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	printf("\n");
//
//	ft_rev_int_tab(arr, size);
//
//	printf("Array after ft_rev_int_tab function:\n");
//	while (j < size)
//	{
//		printf("%d ", arr[j]);
//		j++;
//	}
//	printf("\n");	
//}
