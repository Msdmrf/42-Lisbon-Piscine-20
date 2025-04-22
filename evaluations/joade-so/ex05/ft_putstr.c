/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joade-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:47:39 by joade-so          #+#    #+#             */
/*   Updated: 2025/03/10 15:08:29 by joade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma função que mostre os caracteres de uma string no ecrã.

/* para imprimir os caracteres da string:
- criei um integer (int) e nomeei-o de (i) (int	i;)
- De seguida enomerei i (i = 0;)
- precisei de definir tambem que enquanto o numero de caracteres em str[i] 
  fosse diferente ou igual a nulo ele continuava a escrever 
  ( while(str[i] != '\0') + ( write(1, &str[i], 1); ) + ( i++; )
*/

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	ft_putstr("ola mundo 42");
	return(0);
}*/
