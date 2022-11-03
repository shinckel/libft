/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:37:49 by shinckel          #+#    #+#             */
/*   Updated: 2022/10/31 13:32:20 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}

/* <string.h> locate character in string, first occurrence;
(15)const char *s = string;
(15)int c = here character means byte, this is the char I want to find;
(20)here I need to typecast s, why? 
(23)after running all string, if c is NULL, return the last char '\0';
(25)NULL if the character is not found;
*/
