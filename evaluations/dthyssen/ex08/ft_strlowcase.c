/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthyssen <dthyssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:31:15 by dthyssen          #+#    #+#             */
/*   Updated: 2025/03/09 16:33:09 by dthyssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		if (str[size] >= 'A' && (str[size] <= 'Z'))
		{
			str[size] += 32;
		}
		size++;
	}
	return (str);
}
/*
int main()
{
	char str[] = {"ABCDE"};
	
	printf("%s", ft_strlowcase(str));
	
	return(0);
}
*/
