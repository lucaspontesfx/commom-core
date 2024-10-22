/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:17:11 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/22 16:06:24 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
/*
 * Could see that the follwing function is equivalent,
 but I did not understand yet.
 *
 * int	ft_isalnum( int c)
 * {
 * 	return (ft_isalpha(c) || ft_isdigit(c));
 * }
 */
