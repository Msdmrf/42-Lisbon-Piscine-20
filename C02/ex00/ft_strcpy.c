/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:01:09 by migusant          #+#    #+#             */
/*   Updated: 2025/03/04 15:06:27 by migusant         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//int main()
//{
//	char	src[] = "\"It worked!\"";
//	char	dest[] = "\"Leaving soon...\"";
//
//	printf("This is the string src that will be copied:\n");
//	printf("%s\n\n", src);
//	printf("This is the string dest that will be replaced:\n");
//	printf("%s\n\n", dest);
//	printf("%s\n", ft_strcpy(dest, src));
//	return 0;
//}	
