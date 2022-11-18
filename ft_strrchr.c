/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:35:24 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/18 20:01:31 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if ((unsigned char)c == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}

/* <string.h> locate character in string, last occurrence;
 * it is necessary to typecast both 's' and 'c'(so, they are comparable);
 * the extra r stands for reverse, so you need the last position to countdown;
 * (22) here this if statement needs to be solved first (string last character);
 * (23) the syntax of "s + i" is equal to "s[i]"; 
*/
