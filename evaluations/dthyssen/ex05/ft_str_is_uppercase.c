/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthyssen <dthyssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:49:45 by dthyssen          #+#    #+#             */
/*   Updated: 2025/03/08 16:02:09 by dthyssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		if (str[size] < 'A' || (str[size]) > 'Z')
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
	char str[] = {""};
	printf("%d", ft_str_is_uppercase(str));
	return(0);
}
*/