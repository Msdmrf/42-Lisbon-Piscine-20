/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:04:11 by migusant          #+#    #+#             */
/*   Updated: 2025/03/11 11:30:43 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/* int main()
{
	int		count;
	char	*str;

	str = "Hello World!";
	count = ft_strlen(str);
	printf("String is \"%s\" and its length is %d.\n", str, count);
	return 0;
} */
