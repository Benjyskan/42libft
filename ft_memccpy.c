/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penzo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 11:52:12 by penzo             #+#    #+#             */
/*   Updated: 2018/11/16 18:07:46 by penzo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
		const void *restrict src, int c, size_t n)
{
	int		i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < (int)n)
	{
		((char*)dst)[i] = ((char*)src)[i];
		if (((const char*)src)[i] == (const char)c)
			return (dst + i + 1);
		i++;
	}
	((char*)dst)[i] = ((char*)src)[i];
	return (0);
}
