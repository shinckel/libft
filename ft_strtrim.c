/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:47:33 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/07 18:21:30 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		start;
	int		end;
	char	*aux;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] == 32 || (s1[start] >= 9 && s1[start] <= 13))
		start++;
	end = ft_strlen(s1);
	while (s1[end] == 32 || (s1[end] >= 9 && s1[end] <= 13))
		end--;
	len = end - start - 1;
	aux = (char *)malloc(sizeof(char) * len);
	if (!aux)
		return (NULL);
	aux = ft_substr(s1, start, len);
	return (aux);
}

/* <non-standard> trims beginning and end of string with specific set of chars
 * s1 = the string to be trimmed, set = reference set of characters to trim;
 * it returns the trimmed string(s1 copy), or NULL if the allocation fails;
 * s1 copy is made through malloc, with the characters specified in set;
 */