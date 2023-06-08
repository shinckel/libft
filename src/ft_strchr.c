/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:37:49 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/22 13:12:21 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (0);
}

/* <string.h> locate character in string, first occurrence;
 * it is necessary to typecast both 's' and 'c'(so, they are comparable);
 * (15)const char *s = string;
 * (15)int c = here character means byte, this is the char I want to find;
 * (23)after running all string, if c is NULL, return the last char '\0';
 * (25)NULL if the character is not found;
 */

/*int	main(void)
{
	char	arr[] = "abcdef";

	if (ft_strchr("aeiouAEIOU", arr[0]))
		printf("'%s' starts with a vowel\n", arr);
	else
		printf("'%s' does not start with a vowel\n", arr);
	return (0);
}*/