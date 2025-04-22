/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:37:31 by migusant          #+#    #+#             */
/*   Updated: 2025/03/13 18:17:27 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Conditions:
1. Get the length of the base.
2. Check if base is valid: 
	- string base must have more than one char.
	- string base can only have alphanumeric chars (+ and - excluded here).
	- string base can't have repeated chars.
3. Write the number in the refered base:
	- when number is -2147483648, can't pass it to positive (not an int).
	- when number is negative, pass it to positive treat it that way.
	- when number is positive

Instead of type casting, I  could use: ft_putnbr_base((-(nbr / base_len), base)
*/

#include <unistd.h>
//#include <stdio.h>

int	ft_base_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_is_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_base_len(base) <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if (!(base[i] >= '0' && base[i] <= '9')
			&& !(base[i] >= 'A' && base[i] <= 'Z')
			&& !(base[i] >= 'a' && base[i] <= 'z'))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = 0;
	if (!ft_is_base_valid(base))
		return ;
	base_len = ft_base_len(base);
	if (nbr <= -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr_base((-(long int)nbr) / base_len, base);
		ft_putnbr_base((-(long int)nbr) % base_len, base);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base(-nbr, base);
	}
	else if (nbr < base_len)
		write(1, &base[nbr], 1);
	else
	{
		ft_putnbr_base(nbr / base_len, base);
		ft_putnbr_base(nbr % base_len, base);
	}
}

/* int	main()
{
	ft_putnbr_base(0, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(0, "01");
	write(1, "\n", 1);
	ft_putnbr_base(0, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(0, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483647, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483647, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483647, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483647, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "poneyvif");
	write(1, "\n", 1);
	return 0;
} */
