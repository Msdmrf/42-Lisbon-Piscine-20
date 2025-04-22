/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 17:39:21 by migusant          #+#    #+#             */
/*   Updated: 2025/03/03 17:43:00 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
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
	char	str[] = "abcdefghi";
//	char    str[] = "abcDefGGhi";
//	char    str[] = "";
	int	ret;

	ret = ft_str_is_lowercase(str);
	printf("Return value is %d.\n", ret);
	return 0;
}
