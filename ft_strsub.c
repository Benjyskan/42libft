/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penzo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:42:57 by penzo             #+#    #+#             */
/*   Updated: 2018/11/13 19:07:31 by penzo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;
	int		j;

	if (!(res = malloc(sizeof(char) * len + 1)))
		return (NULL);
	j = start;
	ft_putendl("Hey");
	i = 0;
	while (len)
	{
		res[i] = s[j];
		i++;
		j++;
		len--;
	}
	ft_putendl("Hey");
	return (res);
}
