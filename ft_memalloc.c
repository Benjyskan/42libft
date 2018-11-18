/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penzo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 19:26:02 by penzo             #+#    #+#             */
/*   Updated: 2018/11/18 14:00:04 by penzo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new;
	int		i;

	if (!(new = malloc(size)))
		return (NULL);
	i = 0;
	while (i < (int)size)
	{
		((char*)new)[i] = 0;
		i++;
	}
	return (new);
}
