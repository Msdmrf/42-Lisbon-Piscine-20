/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-so <jdias-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:59:14 by jdias-so          #+#    #+#             */
/*   Updated: 2025/03/18 21:07:04 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *strs)
{
	int	i;

	i = 0;
	while (strs[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	conc2(char *dest, char *sep, int *x);

char	*conc(int size, char **strs, char *sep, char *dest)
{
	int	i;
	int	x;
	int	a;

	i = 0;
	x = 0;
	while (i < size)
	{
		a = 0;
		while (strs[i][a] != '\0')
		{
			dest[x] = strs[i][a];
			x++;
			a++;
		}
		if (i < size - 1)
		{
			conc2(dest, sep, &x);
		}
		i++;
	}
	dest[x] = '\0';
	return (dest);
}

void	conc2(char *dest, char *sep, int *x)
{
	int	a;

	a = 0;
	while (sep[a] != '\0')
	{
		dest[*x] = sep[a];
		(*x)++;
		a++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		x;
	char	*dest;

	i = 0;
	x = 0;
	if (size == 0)
	{
		dest = malloc(1);
		if (dest == NULL)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	while (i < size)
	{
		x = x + ft_strlen(strs[i]);
		i++;
	}
	dest = malloc(x + ft_strlen(sep) * (size - 1) + 1);
	if (dest == NULL)
		return (NULL);
	return (conc(size, strs, sep, dest));
}

int main(void)
{
    char *result;
    char *strs[] = {"Hello", "World", "!"};
    char *sep = " ";
    int size = 3;

    result = ft_strjoin(size, strs, sep);
    if (!result)
    {
        printf("Erro na alocação de memória.\n");
        return (1);
    }

    printf("Resultado: \"%s\"\n", result);
    free(result);

    // Teste com size = 0
    result = ft_strjoin(0, strs, sep);
    if (!result)
    {
        printf("Erro na alocação de memória.\n");
        return (1);
    }

    printf("Resultado com size = 0: \"%s\"\n", result);
    free(result);

    return (0);
}
