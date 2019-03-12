/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penzo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 11:11:57 by penzo             #+#    #+#             */
/*   Updated: 2018/11/21 11:12:35 by penzo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin_new;
	t_list	*new;

	if (!lst)
		return (NULL);
	begin_new = f(lst->content, lst->content_size);
	new = begin_new;
	while (lst->next)
	{
		lst = lst->next;
		new->next = f(lst->content, lst->content_size);
		new = new->next;
	}
	return (begin_new);
}
