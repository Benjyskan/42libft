/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penzo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:06:46 by penzo             #+#    #+#             */
/*   Updated: 2018/11/09 17:39:09 by penzo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (c);
	return (0);
}
