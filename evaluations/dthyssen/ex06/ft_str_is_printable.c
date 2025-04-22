/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthyssen <dthyssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:03:39 by dthyssen          #+#    #+#             */
/*   Updated: 2025/03/10 15:06:37 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		if (str[size] < 31 || (str[size]) > 127)
		{
			return (0);
		}
		size++;
	}
	return (1);
}

int main()
{
	char str[] = {""};
	printf("%d", ft_str_is_printable(str));
	return(0);
}
