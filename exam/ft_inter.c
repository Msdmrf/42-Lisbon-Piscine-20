/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <migusant@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:21:55 by migusant          #+#    #+#             */
/*   Updated: 2025/03/20 19:37:28 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$

*/

#include <unistd.h>

int     main(int argc, char **argv)
{

	int i;
	int arr[256] = {0};

	if (argc == 3)
	{
		i = 0;
		while (argv[2][i])
    		{
			if (arr[(int)argv[2][i]] == 0)
				arr[(int)argv[2][i]] = 1;
			i++;
		}

		i = 0;
		while (argv[1][i])
		{
			if (arr[(int)argv[1][i]] == 1)
			{
				arr[(int)argv[1][i]] = 2;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
