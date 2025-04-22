/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antabord <antabord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:09:54 by antabord          #+#    #+#             */
/*   Updated: 2025/03/11 17:14:51 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int	*tab, int size)
{
	int	i;
	int	f;
	int	temp;

	f = size - 1;
	i = 0;
	while (i < f)
	{
		temp = tab[f];
		tab[f] = tab[i];
		tab[i] = temp;
		i++;
		f--;
	}
}

int	main(void)
{
	int t[] = {1, 2, 6, 7, 3, 3};
  	int s;
  	int i;
  
  	i = 0;
  	s = 6;
  
  	ft_rev_int_tab(t, s);
  	while(i < s)
        {
                printf("%d ", t[i]);
                i++;
        }
        return (0);
}
