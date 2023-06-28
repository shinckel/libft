/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:30:08 by shinckel          #+#    #+#             */
/*   Updated: 2023/06/28 10:22:30 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
}

/*
 * lst = the address of a pointer to the first link of the list;
 * new = the address of a pointer to the node to be added to the list;
 * adds the node "new" at the end of the list, return none;
 * (18)no return, so it is empty (just as a break);
 * (21)if the list is empty, 'new' will assume the position;
 * (27)unlike ft_lstadd_front, you don't need to assign *lst back(*lst = new);
 * ...because 'new' is the final node! so you must link it just once;
 */