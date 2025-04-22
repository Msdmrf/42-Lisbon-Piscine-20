/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:18:37 by migusant          #+#    #+#             */
/*   Updated: 2025/03/17 14:30:53 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)

{
	printf("Before:\n");
	printf("point.x = %d\n", point->x);
	printf("point.y = %d\n", point->y);
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	printf("After:\n");
	printf("point.x = %d\n", point.x);
	printf("point.y = %d\n", point.y);
	return (0);
}
