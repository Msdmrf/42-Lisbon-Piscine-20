/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 10:53:13 by migusant          #+#    #+#             */
/*   Updated: 2025/03/17 11:03:54 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/* int	main()
{
	// Test ft_putchar
	ft_putchar('A');
	ft_putchar('\n');

	// Test ft_swap
	int x = 10, y = 20;
	ft_swap(&x, &y);
	printf("x: %d, y: %d\n", x, y);

	// Test ft_putstr
	ft_putstr("Hello, world!\n");

	// Test ft_strlen
	char str[] = "Hello!";
	printf("Length of '%s': %d\n", str, ft_strlen(str));

	// Test ft_strcmp
	char 	s1[] = "apple";
	char	s2[] = "apple";
	int             result = ft_strcmp(s1, s2);

	if (result == 0)
		printf("Strings are equal\n");
	else if (result < 0)
		printf("s1 is less than s2\n");
	else
		printf("s1 is greater than s2\n");

	return 0;
} */
