/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 16:54:25 by migusant          #+#    #+#             */
/*   Updated: 2025/03/03 17:25:45 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
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
	char	str[] = "AbCdEfGhI";
//	char    str[] = "4bCd3fGh1";
//	char    str[] = "";
	int	ret;

	ret = ft_str_is_alpha(str);
	printf("Return value is %d.\n", ret);
	return 0;
}
