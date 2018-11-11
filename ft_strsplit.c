/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penzo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 17:59:49 by penzo             #+#    #+#             */
/*   Updated: 2018/11/11 19:53:56 by penzo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int		in_word;
	int		i;
	int		count;

	in_word = 0;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (in_word == 0 && s[i] != c)
		{
			in_word = 1;
			count++;
		}
		if (in_word == 1 && s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

int		ft_getwordlen(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char 	**tab;
	int		i;
	int		j;
	int		in_word;
	char 	*ss;

	tab = malloc(sizeof(char**) * ft_count_words(s, c) + 1);
	i = 0;
	j = 0;
	in_word = 0;
	ss = (char*)s;
	while (ss[i])
	{
		if (in_word == 0 && ss[i] != c)
		{
			in_word = 1;
			tab[j] = malloc(sizeof(char) * (ft_getwordlen(&ss[i], c) + 1));
			tab[j] = &ss[i];
			j++;
		}
		if (in_word == 1 && ss[i] == c)
		{
			in_word = 0;
			ss[i] = '\0';
		}
		i++;
	}
	tab[j] = "\0";
	return ((char **)tab);
}
