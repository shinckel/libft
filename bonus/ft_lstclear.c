/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:31:11 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/18 14:59:23 by shinckel         ###   ########.fr       */
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