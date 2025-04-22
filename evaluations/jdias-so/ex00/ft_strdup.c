/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-so <jdias-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:57:39 by jdias-so          #+#    #+#             */
/*   Updated: 2025/03/18 20:49:11 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	int		i;
	char	*s;

	i = 0;
	while (src[i])
		i++;
	s = malloc((i + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

int	main()
{
	char	*str_src;
	char	*str_dest;
	str_src = "This string will be copied!";
	str_dest = ft_strdup(str_src);
	printf("str_dest[] = %s\n", str_dest);
	free(str_dest);
	return 0;
}
