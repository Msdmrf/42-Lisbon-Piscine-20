/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pigarcia <pigarcia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:08:55 by pigarcia          #+#    #+#             */
/*   Updated: 2025/03/10 15:13:42 by pigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	source[] = "Bandido";
	char	desti[40] = "Montaria no boi ";

	printf("Source: %s\nDestine: %s\n\n", source, desti);
	ft_strcat(desti, source);
	printf("Source: %s\nDestine: %s\n\n", source, desti);
}*/
