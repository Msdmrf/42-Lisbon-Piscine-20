/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pigarcia <pigarcia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:18:19 by pigarcia          #+#    #+#             */
/*   Updated: 2025/03/05 15:39:23 by pigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0' && i < nb)
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
	char	source[] = "drogas";
	char	desti[30] = "Nao use ";
	unsigned int	n;

	n = 5;
	printf("Source: %s\nDestino: %s\n\n", source, desti);
	ft_strncat(desti, source, n);
	printf("Source: %s\nDestino: %s\n\n", source, desti);
}*/
