/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:13:28 by shinckel          #+#    #+#             */
/*   Updated: 2023/06/28 10:25:40 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst != NULL)
		new->next = *lst;
	*lst = new;
}

/*
 * lst = the address of a pointer to the first link of a list; 
 * new = the address of a pointer to the node to be added to the list;
 * adds the node "new" at the begging of the list;
 * (18)no return, so it is empty (just as a break);
 * (20)update the link part of *new(otherwise, it is NULL)...;
 * (21)now, the *lst pointer needs to be linked to *new;
 * important to keep this order, or you will loose the lst original position;
 */