/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:20:07 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/22 13:18:17 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

/* <string.h> locate a substring in a string; 
 * find first occurrence of little in big, search limited to slen char of s;
 * returns a pointer to the first character of the first occurrence of little;
 * (22)if little is an empty string, big is returned;
 * (26)here you must establish again the loop limit in len (i + j < len);
 * (32)if just part of little is found in big, reset j to zero and start again;
 * (35)if len is less than the size of little, return NULL;
 * (35)if little occurs nowhere in big, return NULL;
 */

/*int main(void)
{
	char	arr1[] = "soofia";
	char	arr2[] = "of";
	char	*res = ft_strnstr(arr1, arr2, 5);
	puts(res);
	return (0);
}*/