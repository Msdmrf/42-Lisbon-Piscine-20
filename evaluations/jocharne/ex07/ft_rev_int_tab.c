/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocharne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:33:28 by jocharne          #+#    #+#             */
/*   Updated: 2025/03/13 18:04:11 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	safe;
	int	i;
	int	f;

	i = 0;
	f = size -1;
	while (i <= f)
	{
		safe = tab[i];
		tab[i] = tab[f];
		tab[f] = safe;
		i++;
		f--;
	}
}

int   main(void)
{
        int     array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int     size;
        int     i;

        size = 10;
        i = 0;
	while(i <= size)
        {
                printf("%i", array[i]);
                i++;
        }
        printf("%s", " ");
        ft_rev_int_tab(array, size);
        i = 0;
	while (i < size)
	{
                printf("%i", array[i]);
                i++;
        }      
        return(0);
}
