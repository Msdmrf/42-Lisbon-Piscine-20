/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 17:46:49 by migusant          #+#    #+#             */
/*   Updated: 2025/03/09 18:46:42 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
			i++;
		else
			return (0);
	}
	return (1);
}

/* int main()
{
//	char	str[] = "!@#$%^&*";
	char    str[] = "!@#$%^&\n";
//	char    str[] = "";
	int	ret;

	ret = ft_str_is_printable(str);
	printf("Return value is %d.\n", ret);
	return 0;
} */
