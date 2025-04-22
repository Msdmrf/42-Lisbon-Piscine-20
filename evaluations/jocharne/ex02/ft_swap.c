/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocharne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 16:48:02 by jocharne          #+#    #+#             */
/*   Updated: 2025/03/04 11:45:26 by jocharne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	save_a;

	save_a = *a;
	*a = *b;
	*b = save_a;
}
/*int main()
{
    int a = 63, b = 15;
    printf("Antes da troca: a = %d, b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("Depois da troca: a = %d, b = %d\n", a, b);
    return (0);
}*/
