/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:42:05 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/03/11 15:49:58 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	letter;

	i = 0;
	while (str[i] != '\0')
	{
		letter = str[i];
		write(1, &letter, 1);
		i++;
	}
}

/*int	main(void)
{
	char str[] = "Flamengo";
	ft_putstr(str);
}*/
