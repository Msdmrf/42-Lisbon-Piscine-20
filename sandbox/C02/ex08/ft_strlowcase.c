/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:59:39 by migusant          #+#    #+#             */
/*   Updated: 2025/03/03 19:03:53 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
		{
			printf("Skipped character %d: %c\n", i,  str[i]);
			i++;
		}
	}
	return (str);
}

int main()
{
	char	str[] = "ABCDEFGHI";
//	char    str[] = "ABCdEFGhI";
//	char	str[] = "ABCD3FGH1";

	printf("%s", ft_strlowcase(str));
	printf("\n");
	return 0;
}

