/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocharne <jocharne@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:34:15 by jocharne          #+#    #+#             */
/*   Updated: 2025/03/04 15:01:01 by jocharne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*int	main(void)
{
	int		num;
	int	dezenas;
	int	unidades;
	ft_ft(&num);
	dezenas	 = (num / 10) + '0';
	unidades = (num % 10) + '0';
	write(1, &dezenas, 1);
	write(1, &unidades, 1);
	return (0);

}*/
