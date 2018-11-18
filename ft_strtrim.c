/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penzo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:16:53 by penzo             #+#    #+#             */
/*   Updated: 2018/11/18 17:54:30 by penzo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*res;
	char	*res2;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
		if (s[i] == 0)
			return ("");
	}
	res = (char*)&s[i];
	if (!(res = ft_strrev(res)))
		return (NULL);
	i = 0;
	while (res[i] == ' ' || res[i] == '\t' || res[i] == '\n')
		i++;
	res = &res[i];
	res = ft_strrev(res);
	/*if (!(res2 = ft_strnew(ft_strlen(res))))
		return (NULL);
	ft_strcpy(res2, res);*/
	ft_strdup(res2, res);
	return (res2);
}
