/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:27:26 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/18 17:51:25 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/* <linked list> returns the address of the last node of the list; 
 * lst = the beginning of the list, the function returns the last list's node;
 * (19)it will compare the addresses! so the loop will run until it finds NULL;
 * (21)here you could add other line for adding a node to the end of the list;
 * ...(lst->next = temp;) where temp is the address for another node;
*/