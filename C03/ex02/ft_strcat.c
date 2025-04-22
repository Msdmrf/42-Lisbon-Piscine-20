/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:26:53 by migusant          #+#    #+#             */
/*   Updated: 2025/03/10 22:33:56 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
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
	char	dest[] = "Hello ";
	char	src[] = "World!";

	printf("String dest is: \"%s\"\n", dest);
	printf("String src is: \"%s\"\n", src);
	ft_strcat(dest, src);
	printf("New string dest is: \"%s\"\n", dest);
	return 0;
} */
