/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 17:43:34 by migusant          #+#    #+#             */
/*   Updated: 2025/03/04 16:42:30 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/* int main()
{
	char	str[] = "ABCDEFGHI";
//	char    str[] = "ABCdEFgH1";
//	char    str[] = "";
	int	ret;

	ret = ft_str_is_uppercase(str);
	printf("Return value is %d.\n", ret);
	return 0;
} */
