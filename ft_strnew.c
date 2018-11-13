/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penzo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:24:14 by penzo             #+#    #+#             */
/*   Updated: 2018/11/13 15:56:27 by penzo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if(!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (size)
	{
		str[size] = 0;
		size--;
	}
	return (str);
}
