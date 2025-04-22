/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocharne <jocharne@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:14:13 by jocharne          #+#    #+#             */
/*   Updated: 2025/03/13 17:51:53 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
    int a = 0;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    int ****e = &d;
    int *****f = &e;
    int ******g = &f;
    int *******h = &g;
    int ********i = &h;

    ft_ultimate_ft(&i);

    if (a > 9)
    {
        int dezenas;
        int unidades;

        dezenas = (a / 10) + '0';
        unidades = (a % 10) + '0';

        write(1, &dezenas, 1);
        write(1, &unidades, 1);
    }

    return (0);
}
