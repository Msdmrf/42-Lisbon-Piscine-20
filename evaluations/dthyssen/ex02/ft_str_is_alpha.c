/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthyssen <dthyssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:47:18 by dthyssen          #+#    #+#             */
/*   Updated: 2025/03/08 14:54:10 by dthyssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)

{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		if ((str[size] < 'A' || str[size] > 'Z')
			&& (str[size] < 'a' || str[size] > 'z'))
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
	char str[] = {"Stringteste"};
	
	printf("%d", ft_str_is_alpha(str));
	
	return (0);
	
}
*/