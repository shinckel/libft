/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:05:56 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/14 18:10:31 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* <linked list> creates a new list element;
 * until now, data storage conditioned to variables as arrays (fixed size list);
 * how to change list's size, or change items position more efficiently?;
 * with linked lists, these items(e.i. nodes) can be anywhere in memory...;
 * ...when in arrays, they are a single block;
 * (void *content)the content to create the node with, it returns the new node;
 * the variable "next" is initialized to NULL;
 * if the memory allocation fails, then you must return NULL;
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list) * 1);
	if (!new)
		return (NULL);
	if (content == NULL)
		new->content = NULL;
	new->content = (void *)content;
	new->next = NULL;
	return (new);
}

/* (25)first, you must create a structure(new t_list structure)...;
 * ...then, proceed to allocate memory so the new structure exists;
 * (32)if the parameter of content is NULL, set the content node to NULL;
 * if not NULL, set new equal to (void *content);
 * (35)last node is NULL, meaning, the end of the list;
 */
