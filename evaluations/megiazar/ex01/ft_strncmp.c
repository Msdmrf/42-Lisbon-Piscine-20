/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:37:20 by megiazar          #+#    #+#             */
/*   Updated: 2025/03/18 12:26:06 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

int	main(void)
{
	char	*str1 = "";
	char	*str2 = "meow";
	int	i = 3;

	ft_strncmp(str1, str2, i);
	printf("Strings: %s, %s\n", str1, str2);
	printf("Result: %d\n", ft_strncmp(str1, str2, i));
	return (0);
}
