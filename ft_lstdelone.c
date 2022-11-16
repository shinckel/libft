/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:47:28 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/16 17:28:56 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/* <linked list> frees the memory of node's content (through function 'del');
 * lst = the node to free, del = function address used to delete the content;
 * takes a node as parameter and frees the memory of its content using 'del';
 * the memory of 'next' must not be freed;
 * return none, external function void free(void *ptr);
 * if there are more nodes = find the previous node of the one to be deleted;
 * ...change the 'next' of the previous node...;
 * ...free memory for the node to be deleted;
 */