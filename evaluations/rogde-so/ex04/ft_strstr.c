/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogde-so <rogde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:50:29 by rogde-so          #+#    #+#             */
/*   Updated: 2025/03/10 18:12:33 by rogde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*n;
	char	*h;

	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			n = to_find;
			h = str;
			while ((*n == *h) && (*n) && (*h))
			{
				n++;
				h++;
				if (*n == '\0')
					return (str);
			}
		}
		str++;
	}
	return (NULL);
}
/*int main()
{
	char haystack[50] = "42 1337 Network 2021 piscine Benguerir Khouribga";
	char needle[30] = " ";
	char *found_needle = ft_strstr(haystack, needle);
	if (found_needle == NULL)
	{
		printf("%p", found_needle);
	}
	else
	{
		printf("%s" ,found_needle);
	}
	return (0);
}*/
