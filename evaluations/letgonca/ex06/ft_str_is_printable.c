/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letgonca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:12:11 by letgonca          #+#    #+#             */
/*   Updated: 2025/03/18 21:36:07 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	if (str[0] == '\0')
		return (1);
	while (str[x] != '\0')
	{
		if (str[x] < 32 || str[x] > 126)
		{
			return (0);
		}
		x++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_printable("Aloooo"));
	printf("%d\n", ft_str_is_printable("0asxas "));
	printf("%d\n", ft_str_is_printable(" "));
	printf("%d\n", ft_str_is_printable("#$%^&\n"));
}
