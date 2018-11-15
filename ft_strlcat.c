/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penzo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:50:05 by penzo             #+#    #+#             */
/*   Updated: 2018/11/15 16:10:53 by penzo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	int		i;

	i = 0;
	dstlen = 0;
	while (dst[i] && dstlen < size)
	{
		i++;
		dstlen++;
	}
	srclen = ft_strlen(src);
	if (dstlen == size)
		return (size + srclen);
	if (srclen < size - dstlen)
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else
	{
		ft_memcpy(dst + dstlen, src, srclen - 1);
		dst[dstlen + size - 1] = 0;
	}
	return (dstlen + srclen);
}
