/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:05:56 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/16 17:06:29 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* <linked list> creates a new list element;
 * until now, data storage conditioned to variables as arrays (fixed size list);
 * how to change list's size, or change items position more efficiently?;
 * with linked lists, these items(e.i. nodes) can be anywhere in memory...;
 * ...when in arrays, they are a single block;
 * linked list consists of nodes(each one contains data and a link to the next);
 * advantages = it is a "dynamic array", ease insertion/deletion of nodes;
 * drawbacks = access nodes sequentially(linear search), can't do binary search;
 * basic operations = deletion, insertion, search, display;
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

/* (void *content)the content to create the node with, it returns the new node;
 * if the memory allocation fails, then you must return NULL;
 * content = current node(data), next = address of the next node, -> pointer;
 * (25)first, you must create a structure(new t_list structure)...;
 * ...then, proceed to allocate memory so the new structure exists;
 * (32)if the parameter of content is NULL, set the content node to NULL;
 * (35)assign data to node = if not NULL, set 'new' equal to (void *content);
 * (36)last node is NULL, meaning, the end of the list;
 * (print_list)this function prints contents starting from the given node; 
 */

/*void	print_list(t_list *n)
{
	while (n != NULL)
	{
		printf(" %s", (char *)n->content);
		n = n->next;
	}
}

int	main(void)
{
	print_list(ft_lstnew((char *)"sofia"));
	return (0);
}*/