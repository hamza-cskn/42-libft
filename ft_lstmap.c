/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcoskun <hcoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:14:57 by hcoskun           #+#    #+#             */
/*   Updated: 2023/07/10 16:21:45 by hcoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *org_node, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	void	*content;

	if (!org_node || !f || !del)
		return (NULL);
	content = f(org_node -> content);
	new_node = ft_lstnew(content);
	if (!new_node)
	{
		del(content);
		ft_lstclear(&new_node, del);
		return (NULL);
	}
	new_node -> next = ft_lstmap(org_node -> next, f, del);
	return (new_node);
}
