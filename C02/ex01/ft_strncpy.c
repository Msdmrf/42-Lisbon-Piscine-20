/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:07:38 by migusant          #+#    #+#             */
/*   Updated: 2025/03/04 16:18:01 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* int main()
{
	char	src[] = "Hello";
	char	dest[] = "World1";
	int	n;

	n = 3;
//	n = 5;
//	n = 7;
	
	printf("String src:\n%s\n", src);
	printf("Old string dest:\n%s\n", dest);
	printf("New string dest:\n%s\n",  ft_strncpy(dest, src, n));
	return 0;

} */
