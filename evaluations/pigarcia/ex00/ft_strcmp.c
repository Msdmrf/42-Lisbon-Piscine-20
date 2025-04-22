/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pigarcia <pigarcia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:35:52 by pigarcia          #+#    #+#             */
/*   Updated: 2025/03/11 11:23:36 by pigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	t1[] = "abcd";
	char	t2[] = "abxd";

	printf("String 1: %s\nString 2: %s\n\n", t1, t2);
	ft_strcmp(t1, t2);
	printf("%d\n", ft_strcmp(t1, t2));
	return (0);
}*/
