/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penzo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 13:41:27 by penzo             #+#    #+#             */
/*   Updated: 2018/11/10 14:02:00 by penzo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int		i;

	i = 0;
	while (src[i] && len > 0)
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	while (len > 0)
	{
		dst[i] = 0;
		i++;
		len--;
	}
}*/
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
