/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:11:54 by sofiahincke       #+#    #+#             */
/*   Updated: 2022/10/31 13:33:22 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && (i + j) < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	while (src[j])
		j++;
	return (i + j);
}

/* <string.h> concatenate string to an specific size;
dst buffer caps the number of characters copied to its size, minus NULL;
it returns the length of dst + src strings (ignoring both null characters);
(22)if dstsize is less than the dst buffer, it will return a truncated answer;
(24)if dstsize is bigger than dst buffer, it will continue to this step;
(24)room for the NULL should be included in dstsize (dstsize - 1);
(29)if dstsize is one, it guarantees my copy is NULL terminated;
(abort trap 6) if the destination doesn't have enough memory space;
*/
