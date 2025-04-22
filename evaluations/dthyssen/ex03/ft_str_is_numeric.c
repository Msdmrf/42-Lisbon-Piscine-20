/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthyssen <dthyssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:33:04 by dthyssen          #+#    #+#             */
/*   Updated: 2025/03/08 15:26:03 by dthyssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		if (str[size] < '0' || (str[size]) > '9')
		{
			return (0);
		}
		size++;
	}
	return (1);
}
/*
			
int main()
{
	char str[] = {"dasdas2"};
	
	printf("%d", ft_str_is_numeric(str));
	
	return(0);
}
*/