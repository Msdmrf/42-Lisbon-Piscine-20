/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joade-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:30:45 by joade-so          #+#    #+#             */
/*   Updated: 2025/03/10 18:53:04 by joade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escreva uma função que conte e retorne o número de caracteres de uma string.

___________________________________________________________________________
 
ANALOGIA: Numa fila de pessoas, cada pessoa tem uma placa com uma letra 
(que juntas formam uma frase). Quero saber quantas pessoas estão na fila?

LÓGICA: Tenho de comecar a contagem por algum lado... 
Assim sendo inicializo a contagem em "0" | int   count; | + |  count = 0; |

E tenho de referir que a contagem de caracters acaba quando encontrar o vazio
|  '\0' ---> este simbolo significa nulo  |

o computador conta de caracter em caracter com a ajuda de | count++; |

E reconhece que chega ao fim quando retorna o valor | return (count;) |
*/

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

/*int	main(void)
{
	int	tam;
	char	*texto;

	texto = "42 lisboa";
	
	tam = ft_strlen(texto);
	printf("a frase que vai ser imprimida = %s\n", texto);
	printf("contagem de numero de caracteres %d\n", tam);
	return (0);
}*/
