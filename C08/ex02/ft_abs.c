/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:50:44 by migusant          #+#    #+#             */
/*   Updated: 2025/03/17 13:27:15 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = -1;
	b = 1;
	c = 0;
	printf("The absolute value of %d is %d\n", a, ABS(a));
	printf("The absolute value of %d is %d\n", b, ABS(b));
	printf("The absolute value of %d is %d\n", c, ABS(c));
	return (0);
}
