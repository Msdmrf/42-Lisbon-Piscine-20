/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:20:50 by dcaires-          #+#    #+#             */
/*   Updated: 2025/03/05 16:26:24 by dcaires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write (1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[str[i] / 16], 1);
			write(1, &"0123456789abcdef"[str[i] % 16], 1);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	word[] = "Hello\tWorld!\nABC\0Test";
	char	*str;

	str = word;
	ft_putstr_non_printable(str);
}*/
