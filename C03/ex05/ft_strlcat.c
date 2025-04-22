/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:30:15 by migusant          #+#    #+#             */
/*   Updated: 2025/03/11 10:12:56 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlen(char *src)
{
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dest)
		return (size + len_src);
	i = len_dest;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}

int main()
{
	unsigned int		size;
	unsigned int		res;
	char	dest[] = "Hello ";
	char	src[] = "World!";

	printf("String dest is: \"%s\"\n", dest);
	printf("String src is: \"%s\"\n", src);
//	size = 3;
//	size = 9;
	size = 13;
//	size = 16;
	res = ft_strlcat(dest, src, size);
	printf("New string dest is: \"%s\"\n", dest);
	printf("Tried to create string of size %u.\n", res);
	return 0;
}
