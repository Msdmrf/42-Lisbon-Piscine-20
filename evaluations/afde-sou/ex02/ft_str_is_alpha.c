/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afde-sou <afde-sou@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:30:08 by afde-sou          #+#    #+#             */
/*   Updated: 2025/03/18 22:19:04 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!isalpha((unsigned char)*str))
		{
			return (0);
		}
		str ++;
	}
	return (1);
}
