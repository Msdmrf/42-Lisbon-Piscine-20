/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:08:07 by pedde-so          #+#    #+#             */
/*   Updated: 2025/03/11 11:26:01 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*prototypes*/
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
char	*ft_convert_to_base(long number, char *base_to, int base);
int		ft_is_valid_base(char *base);
int		ft_strlen(char *str);
int		ft_get_number(char *nbr, char *base_from, int base);
int		ft_contains(char *str, char c);
int		ft_size_of_final_number(long number, int base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	number;
	char	*result;

	if (!ft_is_valid_base(base_from) || !ft_is_valid_base(base_to))
		return (NULL);
	number = ft_get_number(nbr, base_from, ft_strlen(base_from));
	result = ft_convert_to_base(number, base_to, ft_strlen(base_to));
	return (result);
}

int	ft_is_valid_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (*(base + i))
	{
		if (*(base + i) == '+' || *(base + i) == '-')
			return (0);
		j = i + 1;
		while (*(base + j))
		{
			if (*(base + i) == *(base + j))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

int	ft_get_number(char *nbr, char *base_from, int base)
{
	int		minus;
	long	result;

	while (*nbr == ' ' || (*nbr >= '\t' && *nbr <= '\r'))
		nbr++;
	minus = 1;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			minus *= -1;
		nbr++;
	}
	result = 0;
	while (ft_contains(base_from, *nbr) != -1)
	{
		result = result * base + ft_contains(base_from, *nbr);
		nbr++;
	}
	return (result * minus);
}

int	ft_contains(char *str, char c)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == c)
			return (i);
		i++;
	}
	return (-1);
}
