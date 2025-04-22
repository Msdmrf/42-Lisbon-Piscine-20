/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milnasci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:48:18 by milnasci          #+#    #+#             */
/*   Updated: 2025/03/07 13:43:06 by milnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (src[count] != '\0')
		count++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}
/*int	main(void)
{
	char	origem[] = "Olá, Mundo!";
	char	destino[6];
	unsigned int tam = ft_strlcpy(destino, origem, sizeof(destino));

	printf("%s\n", origem);
	printf("%s\n", destino);
	printf("Tamanho real: %u", tam);
	return(0);
}*/
