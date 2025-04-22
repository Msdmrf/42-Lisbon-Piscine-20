/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pigarcia <pigarcia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:39:01 by pigarcia          #+#    #+#             */
/*   Updated: 2025/03/11 11:37:29 by pigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	t1[] = "abcd";
	char	t2[] = "abcx";
	unsigned int	m = 3;

	printf ("S1: %s\nS2: %s\nLimit: %d\n\n", t1, t2, m);
	ft_strncmp(t1, t2, m);
	printf("%d\n", ft_strncmp(t1, t2, m));
}*/
