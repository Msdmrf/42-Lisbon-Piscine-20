/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:38:51 by migusant          #+#    #+#             */
/*   Updated: 2025/03/12 17:20:20 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Conditions:
1. Get the length of the base.
2. Check if base is valid: 
	- string base must have more than one char.
	- string base can only have alphanumeric chars (+ and - excluded here).
	- string base can't have repeated chars.
3. Convert the string received to number, just like ft_atoi().
4. Pass the number to a decimal int:
	- when number is -2147483648, can't pass it to positive (not an int).
	- when number is negative, pass it to positive treat it that way.
	- when number is positive.
*/

#include <unistd.h>
//#include <stdio.h>

int	ft_is_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
		i++;
	if (i <= 1)
		return (0);
	i = 0;
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
	int	num;
	int	signal;
	int	base_len;
	int	i;

	signal = 1;
	num = 0;
	base_len = 0;
	i = 0;
	if (!(ft_is_base_valid(base)))
		return (0);
	while (base[base_len])
		base_len++;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			signal = -signal;
		i++;
	}
	num = ft_compute_total(str, base, i, base_len);
	return (num * signal);
}

/* int	main()
{
	int	num1 = 0;
	int	num2 = 0;
	int     num3 = 0;
	int     num4 = 0;
	int     num5 = 0;
	int     num6 = 0;
	int     num7 = 0;
	int	num8 = 0;

	num1 = ft_atoi_base("   --+-1234", "0123456789");
	printf("\"   --+-1234\"=-1234 -> %d\n", num1);
	num2 = ft_atoi_base("1234", "0123456789");
	printf("\"1234\"=1234 -> %d\n", num2);
	num3 = ft_atoi_base("101010", "01");
	printf("\"101010\"=42 -> %d\n", num3);
	num4 = ft_atoi_base("FF", "0123456789ABCDEF");
	printf("\"FF\"=255 -> %d\n", num4);
	num5 = ft_atoi_base("ofe", "poneyvif");
	printf("\"ofe\"=123 -> %d\n", num5);
	num6 = ft_atoi_base("-123", "0123456789");
	printf("\"-123\"=-123 -> %d\n", num6);
	num7 = ft_atoi_base("   --+-npppppppppp", "poneyvif");
	printf("\"   --+-npppppppppp\"=-2147483648 -> %d\n", num7);
	num8 = ft_atoi_base("   --+-80000000", "0123456789ABCDEF");
	printf("\"   --+-80000000\"=-2147483648 -> %d\n", num8);
	return 0;
} */
