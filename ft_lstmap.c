/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 13:32:20 by agabrie           #+#    #+#             */
/*   Updated: 2018/06/01 13:32:22 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *node;

	if (!lst || !f)
		return (NULL);
	if (lst->next)
	{
		node = ft_lstmap(lst->next, f);
		ft_lstadd(&node, f(lst));
	}
	else
		node = f(lst);
	return (node);
}
