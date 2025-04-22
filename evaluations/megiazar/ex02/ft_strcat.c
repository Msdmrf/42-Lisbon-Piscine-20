/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:11:11 by megiazar          #+#    #+#             */
/*   Updated: 2025/03/11 18:47:34 by megiazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	s1[10] = "start";
	char	*s2 = "End";

	printf("First: %s\nSecond: %s\n", s1, s2);
	ft_strcat(s1, s2);
	printf("Combine: %s\n", s1);
	return (0);
}*/
