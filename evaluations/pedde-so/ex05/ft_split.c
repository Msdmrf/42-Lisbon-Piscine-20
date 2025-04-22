/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:34:51 by pedde-so          #+#    #+#             */
/*   Updated: 2025/03/13 14:29:29 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*prototypes*/
char	**ft_split(char *str, char *charset);
int		ft_count_strs(char *str, char *charset);
char	*ft_get_next_word(char **result, int index, char *charset, char *str);
int		ft_charset_is_next(char *str, char *charset);
int		ft_strlen(char *str);
/*
int main(void)
{
    char *str = "---havia---um-pesse-gueiro-na---ilha--a---";
    char *charset = "--";
    char **result = ft_split(str, charset);
    int i = 0;

    while (result[i])
    {
        printf("Segment %d: \"%s\"\n", i, result[i]);
        free(result[i]);  // Free each allocated segment
        i++;
    }
    free(result);  // Free the array itself

    return (0);
}
*/

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		strs;

	strs = ft_count_strs(str, charset);
	result = (char **) malloc((strs + 1) * sizeof(char *));
	i = 0;
	while (i < strs)
	{
		str = ft_get_next_word(result, i, charset, str);
		i++;
	}
	result[strs] = NULL;
	return (result);
}

int	ft_count_strs(char *str, char *charset)
{
	int	i;
	int	count;

	if (!*charset && *str)
		return (1);
	if (!*str)
		return (0);
	count = 0;
	i = 0;
	while (*(str + i))
	{
		if (ft_charset_is_next(str + i, charset))
			i += ft_strlen(charset);
		else
		{
			while (*(str + i) && !ft_charset_is_next(str + i, charset))
				i++;
			count++;
		}
	}
	return (count);
}

char	*ft_get_next_word(char **result, int index, char *charset, char *str)
{
	int	i;
	int	j;

	i = 0;
	while (ft_charset_is_next(str + i, charset))
		i += ft_strlen(charset);
	j = 0;
	while (!ft_charset_is_next(str + i + j, charset) && *(str + i + j))
		j++;
	result[index] = (char *)malloc((j + 1) * sizeof(char));
	j = 0;
	while (!ft_charset_is_next(str + i + j, charset) && *(str + i + j))
	{
		*(result[index] + j) = *(str + j + i);
		j++;
	}
	*(result[index] + j) = '\0';
	i += j;
	while (ft_charset_is_next(str + i, charset) && *(str + i))
		i++;
	return (str + i);
}

int	ft_charset_is_next(char *str, char *charset)
{
	int	i;

	if (!*charset)
		return (0);
	i = 0;
	while (*(str + i) && *(str + i) == *(charset + i))
		i++;
	if (!*(charset + i))
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}
