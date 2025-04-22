/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:29:22 by migusant          #+#    #+#             */
/*   Updated: 2025/03/11 10:11:51 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/* int main()
{
	char	str[] = "Goose Goose Goose Duck Goose";
	char	to_find[] = "Duck";

	if (ft_strstr(str, to_find) != NULL)
		printf("String \"%s\" found!\n", to_find);
	else
		printf("String \"%s\" not found...\n", to_find);
	return 0;	
} */
