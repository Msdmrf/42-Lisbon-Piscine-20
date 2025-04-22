/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:58:13 by dcaires-          #+#    #+#             */
/*   Updated: 2025/03/04 15:44:24 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter])
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	first_string[] = "Hello";
	char	counter;
	char	*src;
	char	*dest;

	counter = 0;
	while (first_string[counter])
	{
		counter++;
	}
	char	second_string[counter + 1];

	src = first_string;
	dest = second_string;
	ft_strcpy(dest, src);
	printf("%s", second_string);
}*/
