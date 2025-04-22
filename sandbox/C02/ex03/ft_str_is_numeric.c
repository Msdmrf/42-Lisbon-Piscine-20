/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 17:30:00 by migusant          #+#    #+#             */
/*   Updated: 2025/03/03 17:35:08 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			printf("i before i++ = %d\n", i);
			i++;
			printf("i after i++  = %d\n", i);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	char	str[] = "0123456789";
//	char    str[] = "0I23A567B9";
//	char    str[] = "";
	int	ret;

	ret = ft_str_is_numeric(str);
	printf("Return value is %d.\n", ret);
	return 0;
}
