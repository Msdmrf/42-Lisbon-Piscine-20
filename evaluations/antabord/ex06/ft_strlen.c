/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antabord <antabord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:55:15 by antabord          #+#    #+#             */
/*   Updated: 2025/03/11 13:10:14 by antabord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	return (l);
}

/*int	main(void)
{
	char	*str = "hello world";
	int	l;
	l = ft_strlen(str);
	printf(" %d", l);
	return (0);
}*/
