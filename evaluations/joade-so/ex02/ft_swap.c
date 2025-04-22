/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joade-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 10:45:16 by joade-so          #+#    #+#             */
/*   Updated: 2025/03/10 12:38:29 by joade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Escreva uma função que troque o conteúdo de dois inteiros cujos endereços são
passados como parâmetros.
______________________________________________________________________________
Ou seja *a tem um valor de <value> (int	value) + (value = *a),
tenho que dizer que *a devolve o valor a *b (*a = *b),
por sua vez *b fica com o valor de <value> (*b = value).
*/

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	value;

	value = *a;
	*a = *b;
	*b = value;
}

/*int 	main(void)
{
	int	a;
	int	b;

	a = 11;
	b = 34;

	ft_swap(&a, &b);
	printf("novo valor de a = %d\n", a);
	printf("novo valor de b = %d\n", b);
	return(0);
}*/
