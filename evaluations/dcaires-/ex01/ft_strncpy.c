/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:56:42 by dcaires-          #+#    #+#             */
/*   Updated: 2025/03/13 17:21:27 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	if (n == 0)
		return (dest);
	while (src[counter] && counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}

int	main(void)
{
	unsigned int n;

	n = 5;

	char	source_string[] = "Hello";
	char	dest_string[] = "World1";

	printf("The destination string before is: %s\n", dest_string);
	ft_strncpy(dest_string, source_string, n);
	printf("The destination string after is: %s\n", dest_string);
}
