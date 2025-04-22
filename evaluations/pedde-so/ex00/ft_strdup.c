/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:33:44 by pedde-so          #+#    #+#             */
/*   Updated: 2025/03/10 15:45:46 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/* prototypes */
char	*ft_strdup(char *src);
int		ft_strlen(char *str);
/*
int main (void)
{
	char *str_1 = "There was a king who rulled the land";
	char *str_2 = ft_strdup(str_1);
	
	printf("%s\n", str_2);
}
*/

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	ptr = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (*(src + i))
	{
		*(ptr + i) = *(src + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str + len))
		len++;
	return (len);
}
