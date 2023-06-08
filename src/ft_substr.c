/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:16:32 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/21 17:11:58 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*aux;

	if (!s)
		return (NULL);
	i = 0;
	if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
	{
		aux = (char *)malloc(sizeof(*s));
		*aux = '\0';
		return (aux);
	}
	aux = (char *)malloc(sizeof(*s) * (len + 1));
	if (!aux)
		return (NULL);
	while (i < len)
	{
		aux[i] = s[start + i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

/* <non-standard> returns a substring from a string;
 * it returns the substring or NULL (if allocation fails, or there is no string);
 * (23)protection if len or start is bigger than the size of the string;
 * (31)it allocates the substring using malloc, you must add the '\0' (len + 1);
 * (34)the substring begins at index "start" and is of maximum size "len";
 * !s is the same as s == 0, meaning, different than string(so it is empty);
*/
