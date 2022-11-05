/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:37:42 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/05 13:17:02 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst == src)
		return (dst);
	if (src < dst)
	{
		while (n > 0)
		{
			n--;
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}

/* <string.h> same as memcpy, more secure when dst and src might overlap;
 * overlapping meaning = ft_memmove(arr + 7, arr + 9, sizeof(char) * 5);
 * therefore, you copy parts of the string in itself (positions might overlap);
 * 
*/
