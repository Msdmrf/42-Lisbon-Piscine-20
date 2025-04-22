/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megiazar <megiazar@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:39:57 by megiazar          #+#    #+#             */
/*   Updated: 2025/03/18 12:37:58 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i + n] != '\0' && str[i + n] == to_find[n])
		{
			n++;
			if (to_find[n] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}


int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
	printf("%s\n", ft_strstr(argv[1], argv[2]));
	}
	return (0);
}
