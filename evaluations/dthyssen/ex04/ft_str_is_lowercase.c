/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthyssen <dthyssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:27:17 by dthyssen          #+#    #+#             */
/*   Updated: 2025/03/08 15:48:33 by dthyssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		if ((str[size] < 'a' || str[size] > 'z'))
		{
			return (0);
		}
		size++;
	}
	return (1);
}

/*
int main ()
{
	char str[] = {"dasdasdas"};

	printf("%d", ft_str_is_lowercase(str));
	
	return(0);
}
*/