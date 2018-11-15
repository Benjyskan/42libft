/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penzo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 13:03:54 by penzo             #+#    #+#             */
/*   Updated: 2018/11/15 13:15:52 by penzo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;

	i = 0;
	while (((char*)s1)[i] == ((char*)s2)[i] && i < (int)n)
		i++;
	return (((char*)s1)[i] - ((char*)s2)[i]);
}