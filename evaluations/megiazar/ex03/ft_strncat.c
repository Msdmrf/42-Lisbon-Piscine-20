/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:49:40 by megiazar          #+#    #+#             */
/*   Updated: 2025/03/13 14:51:22 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*dst;

	dst = dest;
	i = 0;
	while (*dst)
		dst++;
	while (i < nb && *src)
	{
		*dst = *src;
		src++;
		dst++;
		i++;
	}
	*dst = 0;
	return (dest);
}
/*
int	main(void)
{
	char	mystr[20] = "me";

	ft_strncat(mystr, "ow", 3);
	printf("%s\n", mystr);
	return (0);
}*/
/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%s\n", ft_strncat(argv[1], argv[2], 3));
	}
	return (0);
}*/
