/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant & vmesini- <marvin@42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:05:04 by migusant          #+#    #+#             */
/*   Updated: 2025/03/10 00:42:28 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	error_check_argc (int argc)
{
	if (argc != 2)
		write(1, "Error\n", 6);
}

void	error_check_count (char **argv)
{
	int	count;

	count = 0;
	while (argv[1][count] != '\0')
		count++;
	if (count != 31)
		write(1, "Error\n", 6);
}

void	error_check_1_to_4 (char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 49 && argv[1][i] <= 52)
		{
			i++;
			if (argv[1][i] == 32)
				i++;
		}
		else
			write(1, "Error\n", 6);
	}
}

void    error_check_is_index_possible (char **argv)
{
	int	i;
	int	j;
	int	sum;

	i = 0;
	j = 8;
	while (i < 8 && j < 16)
	{
		sum = 0;	
		sum = argv[1][i] + argv[1][j];
		if (sum < 99 || sum > 101)
			write(1, "Error\n", 6);
		i = i + 2;
		j = j + 2;
	}
	i = 16;
	j = 24;
	while (i < 24 && j < 32)
	{
		sum = 0;	
		sum = argv[1][i] + argv[1][j];
		if (sum < 99 || sum > 101)
			write(1, "Error\n", 6);
		i = i + 2;
		j = j + 2;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	row1[8] = "       ";
	char    row2[8] = "       ";
	char    row3[8] = "       ";
	char    row4[8] = "       ";	

	error_check_argc (argc);
	printf("error_check_argc: PASSOU!\n");

	error_check_count (argv);
	printf("error_check_count: PASSOU!\n");
	
	error_check_1_to_4 (argv);	
	printf("error_check_1_to_4: PASSOU!\n");

	error_check_is_index_possible(argv);
	printf("error_check_is_index_possible: PASSOU!\n");

	i = 0;
	j = 0;
	while (i < 8)
	{
		if (argv[1][i] == '4')
		{
			row1[j] = '1';
			row2[j] = '2';
			row3[j] = '3';
			row4[j] = '4';
		}
		i = i + 2;
		j++;
	}
	j = 0;
	while (i < 16)
	{
		if (argv[1][i] == '4')
		{
			row1[j] = '4';
			row2[j] = '3';
			row3[j] = '2';
			row4[j] = '1';
		}
		i = i + 2;
		j++;
	}
	j = 0;
	while (i < 24)
	{
		if (argv[1][i] == '4')
		{
			if (i == 16)
			{
				row1[j] = '1';
                                row1[j+2] = '2';
                                row1[j+4] = '3';
                                row1[j+6] = '4';
				j = 0;
			}
			if (i == 18)
			{
				row2[j] = '1';
                                row2[j+2] = '2';
                                row2[j+4] = '3';
                                row2[j+6] = '4';
				j = 0;
			}
			if (i == 20)
			{
				row3[j] = '1';
                                row3[j+2] = '2';
                                row3[j+4] = '3';
                                row3[j+6] = '4';
				j = 0;
			}
			if (i == 22)
			{
				row4[j] = '1';
                                row4[j+2] = '2';
                                row4[j+4] = '3';
                                row4[j+6] = '4';
				j = 0;
			}
		}
		i = i + 2;
		j++;
	}
	j = 0;
	while (i < 32)
	{
		if (argv[1][i] == '4')
		{
			if (i == 24)
			{
				row1[j] = '4';
                                row1[j+2] = '3';
                                row1[j+4] = '2';
                                row1[j+6] = '1';
				j = 0;
			}
			if (i == 26)
			{
				row2[j] = '4';
                                row2[j+2] = '3';
                                row2[j+4] = '2';
                                row2[j+6] = '1';
				j = 0;
			}
			if (i == 28)
			{
				row3[j] = '4';
                                row3[j+2] = '3';
                                row3[j+4] = '2';
                                row3[j+6] = '1';
				j = 0;
			}
			if (i == 30)
			{
				row4[j] = '4';
                                row4[j+2] = '3';
                                row4[j+4] = '2';
                                row4[j+6] = '1';
				j = 0;
			}
		}
		i = i + 2;
		j++;
	}
	printf("%s\n", row1);
        printf("%s\n", row2);
        printf("%s\n", row3);
        printf("%s\n", row4);
	return 0;
}
