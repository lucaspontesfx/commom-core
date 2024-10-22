/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:21:07 by lucda-si          #+#    #+#             */
/*   Updated: 2024/10/22 21:26:10 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (unsigned char)c)
		{
			return (ptr);
		}
		ptr++;
	}
	if (c == 0)
	{
		return (ptr);
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (ac == 3)
	{
		printf("%s", ft_strchr(&av[1][j], av[2][j]));
		return (0);
	}
}
*/
