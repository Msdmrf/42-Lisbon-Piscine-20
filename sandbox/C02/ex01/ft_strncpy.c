/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:59:08 by migusant          #+#    #+#             */
/*   Updated: 2025/03/03 16:52:44 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
 * The strcpy() function copies the bytes from the string pointed to by src to 
 * the buffer pointed to by dst (including the terminating '\0' character) and 
 * returns dest. It is easily misused with the buffer overflow issue. When 
 * calling strcpy(), the programmer must take care that the bytes being copied 
 * don´t overrun the space available in the buffer pointed to by dst. The 
 * strncpy() function fixes this problem, because it receives an extra 
 * argument when called. That argument is n, and it refers to the size of the 
 * string pointed to by src. At most, it copies n bytes from src to dst. As 
 * long as n does not exceed the space allocated in dst, a buffer overrun can 
 * never occur.
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char	src[] = "It worked!";
//	char	dest[] = "Leaving soon...";
	char	dest[] = "Piqui...";
	int	n;
	int	size_src;
	int	size_dest;

	size_src = 0;
	while (src[size_src] != '\0')
	{
		size_src++;
	}
	n = size_src;

	size_dest = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}

	printf("String src that will be copied, of size %d:\n", size_src);
	printf("%s\n\n", src);
	printf("String dest that will be replaced, of size %d:\n", size_dest);
	printf("%s\n\n", dest);
	printf("New string dest, of size %d:\n%s\n\n", n,  ft_strncpy(dest, src, n));

	size_dest = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	printf("New size of dest: %d\n", size_dest);

	return 0;

}
