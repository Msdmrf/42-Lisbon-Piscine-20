/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:54:50 by megiazar          #+#    #+#             */
/*   Updated: 2025/03/18 12:55:04 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d_len;
	unsigned int	i_len;

	d_len = 0;
	while (dest[d_len])
	{
		d_len++;
	}
	i_len = 0;
	while (src[i_len])
		i_len++;
	if (size == 0)
		return (i_len);
	if (size <= d_len)
		return (size + i_len);
	i = d_len;
	while (src[i] != '\0' && (i + 1) < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (d_len + i_len);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
 		printf("%i\n", ft_strlcat(argv[1], argv[2], 10));
	}
	return (0);
}
