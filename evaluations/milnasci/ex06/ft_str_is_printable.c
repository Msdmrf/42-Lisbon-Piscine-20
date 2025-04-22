/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milnasci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:44:08 by milnasci          #+#    #+#             */
/*   Updated: 2025/03/06 13:54:16 by milnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
			return (0);
		i++;
	}
	return (1);
}
/*int     main(void)
{
        char    str1[] = " ";
        char    str2[] = "Olá\nMundo";
        char    str3[] = {127, 'A', '\0'};
        char    str4[] = "";

        printf ("%d", ft_str_is_printable(str1));
        printf ("%d", ft_str_is_printable(str2));
        printf ("%d", ft_str_is_printable(str3));
        printf ("%d", ft_str_is_printable(str4));
        return(0);
}*/
