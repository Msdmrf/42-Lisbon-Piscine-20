/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mceia-e- <mceia-e-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:38:30 by mceia-e-          #+#    #+#             */
/*   Updated: 2025/03/06 17:37:20 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	n = 123;
	int	*p1 = &n;
	int	**p2 = &p1;
	int	***p3 = &p2;
	int	****p4 = &p3;
	int	*****p5 = &p4;
	int	******p6 = &p5;
	int	*******p7 = &p6;
	int	********p8 = &p7;
	int	*********p9 = &p8;
	printf("Before: %d\n", n);
	ft_ultimate_ft(p9);
	printf("After: %d\n", n);
}
