/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <migusant@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 20:04:48 by migusant          #+#    #+#             */
/*   Updated: 2025/03/20 20:21:43 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>

*/

#include <unistd.h>

int	not_seen_before(char *str, int i, char ch)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (str[j] == ch)
			return (0);
		j++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (not_seen_before(argv[1], i, argv[1][i]))
				write(1, &argv[1][i], 1);
			i++;
		}
		j = 0;
		while (argv[2][j])
		{
			if (not_seen_before(argv[1], i, argv[2][j]) && not_seen_before(argv[2], j, argv[2][j]))
				write(1, &argv[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
