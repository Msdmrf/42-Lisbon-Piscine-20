/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:39:37 by migusant          #+#    #+#             */
/*   Updated: 2025/03/17 16:04:55 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str_dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	str_dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!str_dest)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		str_dest[i] = src[i];
		i++;
	}
	str_dest[i] = '\0';
	return (str_dest);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*strs;

	strs = malloc((argc + 1) * sizeof(struct s_stock_str));
	if (strs == NULL)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		strs[i].str = argv[i];
		strs[i].size = ft_strlen(argv[i]);
		strs[i].copy = ft_strdup(argv[i]);
		i++;
	}
	strs[i].size = 0;
	strs[i].str = 0;
	strs[i].copy = 0;
	return (strs);
}
