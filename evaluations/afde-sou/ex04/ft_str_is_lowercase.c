/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afde-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:12:41 by afde-sou          #+#    #+#             */
/*   Updated: 2025/03/18 18:12:43 by afde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (islower((unsigned char)*str))
		{
			return (1);
		}
		str ++;
	}
	return (0);
}
