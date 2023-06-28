/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:31:11 by shinckel          #+#    #+#             */
/*   Updated: 2023/06/28 10:25:52 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;
	t_list	*n;

	if (!lst)
		return ;
	aux = *lst;
	n = NULL;
	while (aux != NULL)
	{
		n = aux->next;
		del(aux->content);
		free(aux);
		aux = n;
	}
	*lst = aux;
}

/*
 * lst = the address of a pointer to a node;
 * del = the address of the function used to delete the content of the node;
 * return none, external function = void free(void *ptr);
 * deletes and frees the given node and every successor of that node...;
 * so, it deletes the whole single list!(**lst);
 * finally, the pointer to the list must be set to NULL;
 * remember, just as **lst, head is a pointer of pointers(array);
 * first, you will need two variables to assist your code...;
 * (aux)is the current node and (n)will be the temp for storing aux position;
 * (n)you have to store the address of the nodes somewhere...
 * ...so you can reach them even if the first node is deleted;
 * (23)it means that n is pointing to nothing...you are just initializing it;
 * (26)...then update head as being the second node position(n = aux->next);
 * ...and delete every node, knowing that 'n' has the next position stored;
 * (26)at the last loop, aux will be equal to NULL (n = aux->next = NULL);
 * (31)here, (*lst = NULL) works too, as you must reasign *lst to NULL;
 */