/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:11:02 by dcaires-          #+#    #+#             */
/*   Updated: 2025/03/13 16:05:45 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	length;

	counter = 0;
	length = 0;
	while (src[length])
	{
		length++;
	}
	if (size > 0)
	{
		while (src[counter] && counter < size - 1)
		{
			dest[counter] = src[counter];
			counter++;
		}
		dest[counter] = '\0';
	}
	return (length);
}
/*
int	main(void)
{
	char	first_string[] = "Hello";
	char	*src;
	char	*dest;
	unsigned int	size;

	size = 0;
	while (first_string[size])
	{
		size++;
	}
	char	second_string[size + 1];

	src = first_string;
	dest = second_string;
	ft_strcpy(dest, src, size);
	printf("After calling, the string is: %s\n", second_string);
	printf("The size of the string: %d\n", ft_strcpy(dest, src, size));
}*/
