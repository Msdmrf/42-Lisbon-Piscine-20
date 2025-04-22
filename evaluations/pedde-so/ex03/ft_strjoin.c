/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:48:56 by pedde-so          #+#    #+#             */
/*   Updated: 2025/03/13 16:22:11 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/* prototypes */
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_fill_result(char *result, int size, char **strs, char *sep);
int		ft_add_separator(char *result, char *sep, int j);
int		ft_full_length(int size, char **strs, char *sep);
int		ft_strlen(char *str);

int main(void)
{
    char *result;

    char *words1[] = {"Hello", "world", "42", "Lisbon"};
    result = ft_strjoin(4, words1, " ");
    printf("Test 1: %s\n", result);
    free(result);

    char *words2[] = {"One", "Two", "Three"};
    result = ft_strjoin(3, words2, "");
    printf("Test 2: %s\n", result);
    free(result);

    char *words3[] = {"   leading", "trailing   ", "  both  "};
    result = ft_strjoin(3, words3, "|");
    printf("Test 3: %s\n", result);
    free(result);

    char *words4[] = {"!@#", "$%^", "&*()"};
    result = ft_strjoin(3, words4, "---");
    printf("Test 4: %s\n", result);
    free(result);

    char *words5[] = {"JustOne"};
    result = ft_strjoin(1, words5, "###");
    printf("Test 5: %s\n", result);
    free(result);

    result = ft_strjoin(0, NULL, "sep");
    printf("Test 6: \"%s\"\n", result);
    free(result);

    char *words7[] = {"", "", ""};
    result = ft_strjoin(3, words7, "-");
    printf("Test 7: \"%s\"\n", result);
    free(result);

    return 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		full_length;

	if (size <= 0)
	{
		result = ((char *)malloc(sizeof(char)));
		*result = '\0';
		return (result);
	}
	full_length = ft_full_length(size, strs, sep);
	result = (char *)malloc(full_length * sizeof(char));
	if (!result)
		return (NULL);
	result = ft_fill_result(result, size, strs, sep);
	return (result);
}

int	ft_full_length(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	total = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	return (total + 1);
}

char	*ft_fill_result(char *result, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	j = 0;
	while (k < size)
	{
		i = 0;
		while (*(strs[k] + i))
		{
			*(result + j) = *(strs[k] + i);
			i++;
			j++;
		}
		if (k < size - 1)
			j = ft_add_separator(result, sep, j);
		k++;
	}
	*(result + j) = '\0';
	return (result);
}

int	ft_add_separator(char *result, char *sep, int j)
{
	int	i;

	i = 0;
	while (*(sep + i))
	{
		*(result + j) = *(sep + i);
		j++;
		i++;
	}
	return (j);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}
