/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogde-so <rogde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:27:08 by rogde-so          #+#    #+#             */
/*   Updated: 2025/03/10 18:04:01 by rogde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	e;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	e = 0;
	while (src[e] != '\0')
	{
		dest[i] = src[e];
		i++;
		e++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	dest[60] = "I hope nothing gets appended to me";
	char	*src = "OH GOD OH MY FUCKING GAAAD";
	ft_strcat(dest, src);
	printf("%s", dest);
}*/
