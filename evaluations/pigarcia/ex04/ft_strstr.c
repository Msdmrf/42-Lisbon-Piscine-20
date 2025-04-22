/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pigarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:49:55 by pigarcia          #+#    #+#             */
/*   Updated: 2025/03/10 15:41:30 by pigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	if (!*to_find)
		return ((char *) str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while (to_find[j] != '\0' && str[i + j] == to_find[j])
				++j;
			if (to_find[j] == '\0')
				return ((char *) &str[i]);
		}
		++i;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "Look for your daddy";
	char	to_find[] = "daddy";
	char	*result = ft_strstr(str, to_find);

	if (result == NULL)
		printf("I found nothing");
	else
		printf("The word %s was found", to_find);
	return (0);
}*/
