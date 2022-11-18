/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:12:54 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/18 20:05:14 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}

/* <string.h> find the first occurrence of a character in a buffer;
 * buffer = char array;
 * (const void *s) it points to the memory area that I want to scan;
 * (const void *s) needs to be typecasted to (unsigned char);
 * (int c) it looks for the first instance of c, that char I am looking for;
 * (int c) needs to be typecasted to (unsigned char);
 * (size_t n) it scans the initial n bytes of memory area; 
 * return a pointer to the matching byte or NULL if the char does not occur; 
 */