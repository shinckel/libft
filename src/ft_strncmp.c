/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:41:52 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/22 13:14:06 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/* <string.h> compare two strings;
 * returns an int less than 0 if s1 comes before s2;
 * returns 0 if s1 is the same as s2;
 * returns an int greater than 0 if s1 comes after s2;
 * the strings are compared using “ASCIIbetical” order;
 * "AAA" would come before "BBB", as well "AAA" comes before "aaa";
 * (17)it compares until to find a difference between the strings;
 * if n reaches zero, it means that both strings are equal;
 */

/*int	main(void)
{
	char	arr1[] = "sofia";
	char	arr2[] = "soraia";
	int	i = ft_strncmp(arr1, arr2, 4);

	printf("Output: %i\n", i);
	return(0);
}*/