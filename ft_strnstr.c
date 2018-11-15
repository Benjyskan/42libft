/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penzo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:30:01 by penzo             #+#    #+#             */
/*   Updated: 2018/11/14 16:49:58 by penzo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;

	if (needle[0] == 0)
		return ((char*)haystack);
	i = 0;
	while (haystack[i] && len > 0)
	{
		if (haystack[i] == needle[0])
			if (!(ft_strncmp(&haystack[i], needle, ft_strlen(needle))))
				return ((char*)&haystack[i]);
		i++;
		ft_putendl("HEY");
		len--;
	}
	ft_putendl("End");
	return (NULL);
}
