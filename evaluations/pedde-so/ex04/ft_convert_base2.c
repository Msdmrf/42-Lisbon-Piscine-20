/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:08:23 by pedde-so          #+#    #+#             */
/*   Updated: 2025/03/11 11:27:04 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*prototypes*/
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
char	*ft_convert_to_base(long number, char *base_to, int base);
int		ft_is_valid_base(char *base);
int		ft_strlen(char *str);
int		ft_get_number(char *nbr, char *base_from, int base);
int		ft_contains(char *str, char c);
int		ft_size_of_final_number(long number, int base);

char	*ft_convert_to_base(long number, char *base_to, int base)
{
	char	*result;
	int		size;
	int		minus;

	size = ft_size_of_final_number(number, base);
	result = (char *)(malloc((size + 1) * sizeof(char)));
	*(result + size) = '\0';
	if (number == 0)
		*(result) = base_to[0];
	minus = 1;
	if (number < 0)
		minus = -1;
	number *= minus;
	while (number > 0)
	{
		size--;
		*(result + size) = base_to[number % base];
		number /= base;
	}
	if (minus == -1)
		*(result) = '-';
	return (result);
}

int	ft_size_of_final_number(long number, int base)
{
	int	size;
	int	minus;

	if (number == 0)
		return (1);
	minus = 0;
	if (number < 0)
	{
		number *= -1;
		minus = 1;
	}
	size = 0;
	while (number > 0)
	{
		number /= base;
		size++;
	}
	if (minus)
		return (size + 1);
	return (size);
}
/*
int main(void)
{
    char *result;

    result = ft_convert_base("42", "0123456789", "01");
    printf("Decimal 42 to Binary: %s\n", result);
    free(result);

    result = ft_convert_base("101010", "01", "0123456789");
    printf("Binary 101010 to Decimal: %s\n", result);
    free(result);

    result = ft_convert_base("255", "0123456789", "0123456789ABCDEF");
    printf("Decimal 255 to Hexadecimal: %s\n", result);
    free(result);

    result = ft_convert_base("FF", "0123456789ABCDEF", "0123456789");
    printf("Hexadecimal FF to Decimal: %s\n", result);
    free(result);

    result = ft_convert_base("52", "01234567", "0123456789");
    printf("Octal 52 to Decimal: %s\n", result);
    free(result);

    result = ft_convert_base("-2147483648", "0123456789", "01");
    printf("Min INT -2147483648 to Binary: %s\n", result);
    free(result);

    result = ft_convert_base("-FF", "0123456789ABCDEF", "0123456789");
    printf("Hexadecimal -FF to Decimal: %s\n", result);
    free(result);

    result = ft_convert_base("0", "0123456789", "01234567");
    printf("Zero to Octal: %s\n", result);
    free(result);

    result = ft_convert_base("pony", "ponyt", "0123456789");
    printf("Custom base 'pony' to Decimal: %s\n", result);
    free(result);

    result = ft_convert_base("42", "01234+56789", "01"); // Invalid base
    printf("Invalid base (should be NULL): %s\n", result);

    result = ft_convert_base("42", "0123456789"
, "1"); // Invalid base (only 1 char)
    printf("Invalid base (should be NULL): %s\n", result);

    return 0;
}*/
