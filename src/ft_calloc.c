/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:37:28 by shinckel          #+#    #+#             */
/*   Updated: 2023/05/16 13:35:38 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*aux;
	size_t	n;

	n = count * size;
	aux = malloc(n);
	if (aux == NULL)
		return (NULL);
	else
		ft_memset(aux, 0, n);
	return (aux);
}