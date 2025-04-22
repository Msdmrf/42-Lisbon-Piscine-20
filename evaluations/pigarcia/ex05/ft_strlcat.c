/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pigarcia <pigarcia@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:43:35 by pigarcia          #+#    #+#             */
/*   Updated: 2025/03/10 18:21:48 by pigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	srcsize;
	unsigned int	destsize;

	srcsize = ft_strlen(src);
	destsize = ft_strlen(dest);
	if (size <= destsize)
		return (size + srcsize);
	j = destsize;
	i = 0;
	while (src[i] != '\0' && j + 1 < size)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (srcsize + destsize);
}
/*
int	main(void)
{
	unsigned int	size;
	unsigned int	res;
	char	dest[] = "Good night! ";
	char	src[] = "Good luck!";

	printf("String dest is: \"%s\"\n", dest);
	printf("String src is: \"%s\"\n", src);
//	size = 3;
	size = 10;
//	size = 22;
//	size = 50;
	res = ft_strlcat(dest, src, size);
	printf("New string dest is: \"%s\"\n", dest);
	printf("Tried to create string of size %u.\n", res);
        return (0);
}*/
