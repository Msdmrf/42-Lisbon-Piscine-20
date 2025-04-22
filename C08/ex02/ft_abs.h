/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:38:07 by migusant          #+#    #+#             */
/*   Updated: 2025/03/17 14:12:21 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(Value) abs(Value)

static inline int	abs(int Value)
{
	if (Value < 0)
		return (-Value);
	return (Value);
}

#endif
