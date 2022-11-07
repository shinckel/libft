/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:09:04 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/07 15:44:20 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*aux;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	len = i + j;
	aux = (char *)malloc(sizeof(char) * (len + 1));
	if (!aux)
		return (NULL);
	ft_memmove(aux, s1, i);
	ft_memmove(aux + i, s2, j);
	aux[len] = '\0';
	return (aux);
}

/* <non-standard> concatenates two strings;
 * s1 = prefix string, s2 = suffix string;
 * it returns the new string (new buffer created through malloc)...
 * ... or NULL if the allocation fails, moreover, if s1 or s2 do not exist;
 * (28)it is more clean to leave one byte out of the len variable;
 * (34)so I can use len directly as an index (without subtracting one);
 * (33)the solution relies on pointer arithmetic;
 */
