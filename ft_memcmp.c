/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:18:47 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/22 13:17:12 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (((unsigned char)str1[i]) - ((unsigned char)str2[i]));
		i++;
	}
	return (0);
}

/* <string.h> compare memory areas;
 * s1 and s2 are pointers to the buffers that I want to compare;
 * n is the number of bytes that I want to compare;
 * I am working again with (const void), so I must typecast (unsigned char *);
 * return(-1) if the object pointed by s1 is less than the object pointed by s2;
 * return(0) if both are equal;
 * return(1) if s1 is greater than s2;
 */

/*int	main(void)
{
	char arr1[] = "soraia";
	char arr2[] = "sofia";
	int	i = ft_memcmp(arr1, arr2, 4);
	printf("Output: %d\n", i);
	return (0);
}*/