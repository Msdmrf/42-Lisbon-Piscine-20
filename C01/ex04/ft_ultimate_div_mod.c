/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:15:10 by migusant          #+#    #+#             */
/*   Updated: 2025/03/02 17:22:06 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

//int main()
//{
//	int a, b;
//	
//	a = 22;
//	b = 3;
//	printf("a and b before ft_ultimate_div_mod were %d and %d.\n", a, b);
//	ft_ultimate_div_mod(&a, &b);
//	printf("a and b after ft_ultimate_div_mod are %d and %d.\n", a, b);
//	return 0;
//}
