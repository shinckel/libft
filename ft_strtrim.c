/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:47:33 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/09 22:09:58 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	len = end - start + 1;
	return (ft_substr(s1, start, len));
}

/* <non-standard> trims beginning and end of string with specific set of chars;
 * s1 = the string to be trimmed, set = reference set of characters to trim;
 * it returns the trimmed string(s1 copy), or NULL if the allocation fails;
 * you must jump the established set, so I know where the string starts and ends;
 * (25)strchr = locate character in string, returns pointer first occurrence;
 * (30)the ft_substr will do the job of extracting the substring;
 * if s = "xyavocadoz" and set = "xyz", output = "avocado";
 */
