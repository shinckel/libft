/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:37:42 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/22 13:10:16 by shinckel         ###   ########.fr       */
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
 * ...so the copy is always done in a nondestructive manner;
 * it returns the original value of dst;
 * overlapping meaning = ft_memmove(arr + 7, arr + 9, sizeof(char) * 5);
 * therefore, you copy parts of the string in itself (positions might overlap);
 * note that a byte for the NULL should be included in size;
 * (19)overlapping can just occur if 'src' is smaller than 'dst'; 
*/

/*int	main(void)
{
	size_t	len;
	char	arr[] = "soraia e sofia";

	len = 0;
	ft_memmove(arr + 7, arr + 9, sizeof(char) * 5);
	while (arr[len])
	{
		printf("%c", arr[len]);
		len++;
	}
	printf("\n");
}*/