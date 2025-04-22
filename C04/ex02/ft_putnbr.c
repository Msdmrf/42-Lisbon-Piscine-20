/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:52:28 by migusant          #+#    #+#             */
/*   Updated: 2025/03/11 15:14:04 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Conditions:
1. zero: write 0.
2. negative: write "-" sign and treat it like a positive (except -2147483648).
3. positive: store chars in reverse order in array and write backwardwards.
*/

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		i;
	char	str[12];

	i = 0;
	if (nb == 0)
		write (1, "0", 1);
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb > 0)
	{
		while (nb != 0)
		{
			str[i] = '0' + (nb % 10);
			nb = nb / 10;
			i++;
		}
		while (--i >= 0)
			write (1, &str[i], 1);
	}
}

/* int	main()
{
	int	num;

//	num = 6;
//	num = -5;
//	num = 42;
	num = -42;
//	num = 2147483647;
//	num = -2147483647;
//	num = -2147483648;
	ft_putnbr(num);
	return 0;
} */
