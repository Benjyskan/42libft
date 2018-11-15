/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penzo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 19:05:00 by penzo             #+#    #+#             */
/*   Updated: 2018/11/15 11:13:09 by penzo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	while (len)
	{
		((unsigned char*)b)[len] = (unsigned char)c;
		--len;
	}
	((unsigned char*)b)[0] = (unsigned char)c;
	return (b);
}
