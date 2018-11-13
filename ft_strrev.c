/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penzo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:28:39 by penzo             #+#    #+#             */
/*   Updated: 2018/11/13 16:56:59 by penzo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char const *s)
{
	int		len;
	char	*res;
	int		i;

	len = ft_strlen(s);
	res = ft_strnew(len);
	i = 0;
	while (len)
	{
		res[i] = s[len - 1];
		i++;
		len--;
	}
	res[i] = 0;
	return (res);
}
