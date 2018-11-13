/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penzo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 13:41:27 by penzo             #+#    #+#             */
/*   Updated: 2018/11/13 20:00:27 by penzo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int		i;

	i = 0;
	while (len > 0)
	{
		if (src[i])
			dst[i] = src[i];
		else
			dst[i] = 0;
		i++;
		len--;
	}
	return (dst);
}
