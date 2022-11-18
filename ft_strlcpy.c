/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:11:52 by sofiahincke       #+#    #+#             */
/*   Updated: 2022/11/18 22:03:58 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (ft_strlen(src));
}

/* <string.h> copy string to an specific size;
 * (const char*) = is a mutable pointer to an immutable character/string;
 * (char* const) = immutable pointer and mutable character/string;
 * (const char* const) = both immutable;
 * (20)it returns the size of src, regardless of how many characters are copied;
 * (26)room for the NULL should be included in dstsize (dstsize - 1);
 * (31)if dstsize is one, it guarantees my copy is NULL terminated;
 * (35)the returned value of src ignores NULL;
 */