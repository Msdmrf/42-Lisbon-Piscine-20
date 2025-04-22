/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogde-so <rogde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:31:39 by rogde-so          #+#    #+#             */
/*   Updated: 2025/03/11 13:32:16 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	lengthloop(char *l)
{
	int	i;

	i = 0;
	while (l[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	unsigned int	i;
	unsigned int	l2;

	i = 0;
	if (!dest || ! src)
		return (0);
	l = lengthloop(dest);
	l2 = lengthloop(src);
	if (size == 0)
		return (l2);
	if (size <= l)
		return (size + l2);
	while (i + l < size - 1 && src[i] != '\0')
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (l + l2);
}
int	main()
{
	char	src[20] = "aiai";
	char	dest[10] = "aiaiai";
	unsigned int	n;

	n = ft_strlcat(dest, src, 11);
	printf("%d", n);
	return (0);
}
