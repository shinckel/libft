/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:13:44 by shinckel          #+#    #+#             */
/*   Updated: 2023/06/28 10:21:37 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;

	if (!lst || !f || !del)
		return (NULL);
	newlist = ft_lstnew(f(lst->content));
	if (newlist == NULL)
	{
		ft_lstclear(&newlist, del);
		return (NULL);
	}
	if (lst->next != NULL)
		newlist->next = ft_lstmap(lst->next, f, del);
	return (newlist);
}

/*
 * lst = the address of a pointer to a node;
 * f = the address of the function used to iterate on the list;
 * del = the address of the function used to delete the content of a node;
 * it returns the new list, or NULL if allocation fails; 
 * external functions permitted(malloc, free);
 * creates a new list resulting of the successive application of 'f'...
 * ...the 'del' function is used to delete the content of a node if needed;
 * (21)don't forget: ft_lstnew needs one parameter of type content(lst->content);
 * (27)recursive function = calls itself for creating the next nodes;
 * or you can solve it with two variables(newlist = 0 and mem = ft_lstnew)...; 
 * for creating the nodes and then sending it to 'newlist'(using ft_lstaddback);
 * so 'newlist' is a blank canvas that receive nodes created through 'mem';
 */