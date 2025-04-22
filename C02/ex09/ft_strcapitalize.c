/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:09:48 by migusant          #+#    #+#             */
/*   Updated: 2025/03/04 16:51:24 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;

	check = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && check == 0)
		{
			str[i] = str[i] - 32;
			check = 1;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && check == 0)
			check = 1;
		else if (str[i] >= 'A' && str[i] <= 'Z' && check == 1)
			str[i] = str[i] + 32;
		else if (str[i] >= '0' && str[i] <= '9' && check == 0)
			check = 1;
		else if ((str[i] < '0' || (str[i] > '9' && str[i] < 'A')
				|| (str[i] > 'Z' && str[i] < 'a')
				|| str[i] > 'z') && check == 1)
			check = 0;
		i++;
	}
	return (str);
}

/* int main()
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux";
//	char	str[] = "asd jhasdkf JFHs daush as/df=FSDF1FASDAS.SA D,As";
	printf("%s", ft_strcapitalize(str));
	printf("\n");
	return 0;
} */
