/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:36:46 by migusant          #+#    #+#             */
/*   Updated: 2025/03/02 18:42:55 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return (count);
}

//int main()
//{
//	char	*str;
//	int	count;
//
//	str = "abcdefghijklmnopqrstuvwxyz";
//	count = ft_strlen(str);
//	printf("The string has %d characters.\n", count);
//	return 0;
//}
