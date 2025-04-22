/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthyssen <dthyssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:00:59 by dthyssen          #+#    #+#             */
/*   Updated: 2025/03/09 16:29:35 by dthyssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		if (str[size] >= 'a' && (str[size] <= 'z'))
		{
			str[size] -= 32;
		}
		size++;
	}
	return (str);
}
/*
int main()
{
	char str[] = {"abcPP"};
	
	printf("%s", ft_strupcase(str));
	
	return(0);
}

*/