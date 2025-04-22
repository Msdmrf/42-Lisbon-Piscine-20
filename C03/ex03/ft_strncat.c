/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:03:18 by migusant          #+#    #+#             */
/*   Updated: 2025/03/10 22:34:35 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main()
{
	unsigned int		n;
	char	dest[] = "Hello ";
	char	src[] = "World!";

	n = 9;
	printf("String dest is: \"%s\"\n", dest);
	printf("String src is: \"%s\"\n", src);
	ft_strncat(dest, src, n);
	printf("New string dest is: \"%s\"\n", dest);
	return 0;
} */
