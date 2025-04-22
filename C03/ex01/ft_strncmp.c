/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:25:55 by migusant          #+#    #+#             */
/*   Updated: 2025/03/10 22:33:13 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *s1 != '\0' && *s1 == *s2)
	{
		i++;
		s1++;
		s2++;
	}
	if (i == n)
		return (0);
	return (*s1 - *s2);
}

/* int main()
{
	int		n;
	int		cmp;
	char	*str_1;
	char	*str_2;

	n = 8;
	cmp = 0;
	str_1 = "String 1";
	printf("%s\n", str_1);
	str_2 = "String 2";
	printf("%s\n", str_2);
	cmp = ft_strncmp(str_1, str_2, n);
	if (cmp == 0)
		printf("First %d chars are equal: return %d.\n", n, cmp);
	else
		printf("Difference within %d chars: return %d.\n", n, cmp);
	return 0;
} */
