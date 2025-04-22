/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogde-so <rogde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:49:21 by rogde-so          #+#    #+#             */
/*   Updated: 2025/03/06 18:26:21 by rogde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				return (s1[i] - s2[i]);
			}
			if (s1[i] < s2[i])
			{
				return (-(s2[i] - s1[i]));
			}
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "ABc";
	s2 = "ABz";
	ft_strcmp(s1, s2);
}*/
