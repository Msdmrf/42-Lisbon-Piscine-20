/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letgonca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:16:34 by letgonca          #+#    #+#             */
/*   Updated: 2025/03/18 21:18:46 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

int main()
{
	char	src[] = "\"It worked!\"";
	char	dest[] = "\"Leaving soon...\"";

	printf("This is the string src that will be copied:\n");
	printf("%s\n\n", src);
	printf("This is the string dest that will be replaced:\n");
	printf("%s\n\n", dest);
	printf("%s\n", ft_strcpy(dest, src));
	return 0;
}	
