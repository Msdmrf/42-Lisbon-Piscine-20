/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:34:34 by tsilberm          #+#    #+#             */
/*   Updated: 2025/03/06 16:35:05 by tsilberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || !base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
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

int	ft_length_string(char *str, int j)
{
	int	i;

	i = 0;
	while (str[j])
	{
		i++;
		j++;
	}
	return (i - 1);
}

int	ft_exponent(int nbr, int exponent)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (exponent == 0)
		return (1);
	while (i < exponent)
	{
		result *= nbr;
		i++;
	}
	return (result);
}

int	ft_compute_total(char *str, char *base, int i, int base_len)
{
	int	result;
	int	exponent;
	int	base_index;

	result = 0;
	exponent = ft_length_string(str, i);
	while (str[i] >= 32 && str[i] <= 126)
	{
		base_index = 0;
		while (base[base_index] != str[i])
		{
			base_index++;
		}
		result += ft_exponent(base_len, exponent) * base_index;
		i++;
		exponent--;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	base_len;
	int	i;

	base_len = 0;
	sign = 1;
	i = 0;
	if (!(is_valid_base(base)))
		return (0);
	while (base[base_len])
		base_len++;
	while (str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	return (sign * ft_compute_total(str, base, i, base_len));
}
/*int     main()
{
        printf("-1234 -> %d\n", ft_atoi_base("   --+-1234", "0123456789"));
        printf("1234 -> %d\n", ft_atoi_base("1234", "0123456789"));
        printf("42 -> %d\n", ft_atoi_base("101010", "01"));
        printf("255 -> %d\n", ft_atoi_base("FF", "0123456789ABCDEF"));
        printf("123 -> %d\n", ft_atoi_base("ofe", "poneyvif"));
        printf("-123 -> %d\n", ft_atoi_base("-123", "0123456789"));
	return 0;
}*/
