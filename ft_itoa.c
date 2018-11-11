/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penzo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:04:57 by penzo             #+#    #+#             */
/*   Updated: 2018/11/11 17:59:38 by penzo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_getnblen(int n)
{
	int		len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len = 1;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_allocate(int n)
{
	char	*str;

	str = NULL;
	if (n < 0)
	{
		str = ft_strnew(ft_getnblen(n) + 2);
		str[0] = '-';
		return (&str[1]);
	}
	else
	{
		str = ft_strnew(ft_getnblen(n) + 1);
		return (str);
	}
}

char	*ft_intmin(void)
{
	char	*str;

	str = ft_allocate(12);
	str = "-2147483648";
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	if (n == -2147483648)
		return (ft_intmin());
	str = ft_allocate(n);
	len = ft_getnblen(n);
	i = 0;
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
		i = 1;
	}
	while (len > i)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}
