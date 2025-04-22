/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogde-so <rogde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:16:06 by rogde-so          #+#    #+#             */
/*   Updated: 2025/03/11 11:54:20 by rogde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && (*s1 == *s2) && (*s1) && (*s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}
/*
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				return (s1[i] - s2[i]);
			}
			else
			{
				return (-(s2[i] - s1[i]));
			}
		}
		n--;
		i++;
	}
	return (0);
}*/
/*int	main(void)
{
	char	*s1;
	char	*s2;
	unsigned int	n;


	s1 = "badbadbad22";
	s2 = "badbadbad1";
	n = 10;
	int result = (ft_strncmp(s1, s2, n));
	printf("%d", result);
	
}*/
