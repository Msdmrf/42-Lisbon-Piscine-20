/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:53:37 by migusant          #+#    #+#             */
/*   Updated: 2025/03/04 12:00:55 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlcpy() and strlcat() functions copy and concatenate strings 
   respectively. They are designed to be safer, more consistent, and less 
   error prone replacements for strncpy(3) and strncat(3).  Unlike those 
   functions, strlcpy() and strlcat() take the full size of the buffer 
   (not just the length) and guarantee to NUL-terminate the result (as long 
   as size is larger than 0 or, in the case of strlcat(), as long as there 
   is at least one byte free in dst). Note that a byte for the NUL should be 
   included in size. Also note that strlcpy() and strlcat() only operate on 
   true “C” strings. This means that for strlcpy() src must be NUL-terminated 
   and for strlcat() both src and dst must be NUL-terminated.

   The strlcpy() function copies up to size - 1 characters from the 
   NUL-terminated string src to dst, NUL-terminating the result. 

   The strlcpy() and strlcat() functions return the total length of the string 
   they tried to create. For strlcpy() that means the length of src.  
   For strlcat() that means the initial length of dst plus the length of src.  
   While this may seem somewhat confusing, it was done to make truncation 
   detection simple.

   Note, however, that if strlcat() traverses size characters without finding 
   a NUL, the length of the string is considered to be size and the destination 
   string will not be NUL-terminated (since there was no space for the NUL).  
   This keeps strlcat() from running off the end of a string. In practice this 
   should not happen (as it means that either size is incorrect or that dst is 
   not a proper “C” string). The check exists to prevent potential security 
   problems in incorrect code. */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

int main()
{
	char	src[] = "It worked!";
//	char	dest[] = "Leaving soon...";
	char	dest[] = "Piqui...";
	unsigned int	size_src;
	int	size_dest;

	size_src = 0;
	while (src[size_src] != '\0')
	{
		size_src++;
	}

	size_dest = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}

	printf("String src that will be copied, of size %u:\n", size_src);
	printf("%s\n\n", src);
	printf("String dest that will be replaced, of size %d:\n", size_dest);
	printf("%s\n\n", dest);
	printf("The new dest string size is %u:\n%u\n\n", size_src,  ft_strlcpy(dest, src, size_src));

	size_dest = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	printf("New string dest , of size %d:\n", size_dest);
	printf("%s\n\n", dest);

	return 0;
}
