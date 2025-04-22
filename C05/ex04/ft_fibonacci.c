/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:57:07 by migusant          #+#    #+#             */
/*   Updated: 2025/03/13 14:41:05 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	temp;
	int	before;
	int	next;
	int	i;

	before = 0;
	next = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	i = 1;
	while (i < index)
	{
		temp = before + next;
		before = next;
		next = temp;
		i++;
	}
	return (next);
}

/* int	main()
{
	int	index;
	int	nth_element;

//	index = -1;
//	index = 0;
//	index = 1;
//	index = 2;
	index = 10;

	nth_element = ft_fibonacci(index);
	printf("0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987\n");
	if (index < 0)
		printf("Negative index found: res = %d\n", nth_element);
	else if (index == 0)
		printf("Index 0 found: res = %d\n", nth_element);
	else if (index == 1)
		printf("Index 1 found: res = %d\n", nth_element);
	else
		printf("Index %d is %d\n", index, nth_element);
	return 0;
} */
