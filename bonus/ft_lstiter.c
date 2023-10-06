/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:36:33 by shinckel          #+#    #+#             */
/*   Updated: 2023/06/28 10:22:07 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
 * lst = the address of a pointer to a node;
 * f = the address of the function used to iterate on the list;
 * return none, external functions none;
 * iterates the list 'lst', applying function 'f' on the content of each node;
 * traverse single linked list = visiting each node until the end node(NULL);
 * (22)works just as i++, each time the loop runs it changes node's position;
 */