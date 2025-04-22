/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:35:38 by migusant          #+#    #+#             */
/*   Updated: 2025/02/28 12:10:17 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int	n;
	int *pn1, **pn2, ***pn3, ****pn4, *****pn5, ******pn6, *******pn7, ********pn8, *********pn9;

	pn9 = &pn8;
	pn8 = &pn7;
	pn7 = &pn6;
	pn6 = &pn5;
	pn5 = &pn4;
	pn4 = &pn3;
	pn3 = &pn2;
	pn2 = &pn1;
	pn1 = &n;

	n = 21;
	printf("Before the function ft_ultimate_ft the value was %d\n", n);
	ft_ultimate_ft(pn9);
	printf("After the function ft_ultimate_ft the value is %d\n", n);
	return 0;
}
