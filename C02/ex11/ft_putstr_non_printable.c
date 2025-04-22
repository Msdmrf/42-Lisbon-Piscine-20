/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:03:46 by migusant          #+#    #+#             */
/*   Updated: 2025/03/04 18:26:57 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* How to calculate hex numbers: Imagine we want to know the hexadecimal number 
   of the character '<', that in decimal is 60. First we need to know the 
   hexadecimal map, that is : "0123456789ABCDEF" 16 characters, 15 indexex. 
   So if we have our decimal number that is 60 we need to first divide it by 16 
   to get the first character and then we need to calculate his module for the 
   2nd character.
   So: div = 60 / 16 = 3 [mod = 60 % 16 = 12]
   The first character will be the 3rd index in our hex map and the second 
   character will be the 12th index in our hex map. So our hex number of our 
   character '<' with the decimal number of 60 is: 3C. */

//#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		div;
	int		mod;
	int		i;
	char	*hex_map;

	hex_map = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			div = str[i] / 16;
			mod = str[i] % 16;
			write(1, "\\", 1);
			write(1, &hex_map[div], 1);
			write(1, &hex_map[mod], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

/* int main()
{
//	char	str[] = "Coucou tu vas bien ?";
	char	str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
	return 0;
} */
