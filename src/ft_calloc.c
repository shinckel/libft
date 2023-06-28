/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:37:28 by shinckel          #+#    #+#             */
/*   Updated: 2023/06/28 10:25:31 by shinckel         ###   ########.fr       */
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

/*
 * dynamic memory allocation change the size of a data structure in runtime;
 * calloc stands for contiguous allocation, it has two differences from malloc;
 * (difference one) initializes each block with a default value 0;
 * (difference two) it has two arguments (malloc has just one);
 * if space is insufficient, alocation fails (returns NULL);
 * (15)(size_t count)how many blocks, (size_t size) size of each block;
 * the content of these blocks will be zero initiated;
 * better to use malloc(faster) than calloc(just in cases zero initiated);
 */