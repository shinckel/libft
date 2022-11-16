/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:30:08 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/16 15:38:21 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	while (*lst == 0)
		new->next = *lst;
	*lst = new;
}

/* <linked list> adds an element at the end of a list
 * lst = the address of a pointer to the first link of the list;
 * new = the address of a pointer to the node to be added to the list;
 * adds the node "new" at the end of the list, return none;
 * (18)no return, so it is empty (just as a break);
 */