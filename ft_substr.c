/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:16:32 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/04 16:49:03 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*aux;

	i = 0;
	if (start >= ft_strlen(s))
	{
		aux = (char *)malloc(sizeof(*s));
		aux = '\0';
		return (aux);
	}
	aux = (char *)malloc(sizeof(*s) * len + 1);
	if (aux == NULL)
		return (0);
	if (s[i])
	{
		while (i != len)
		{
			aux[i] = s[start + i];
			i++;
		}
		aux[i] = '\0';
		return (aux);
	}
	return (0);
}

/* <non-standard> returns a substring from a string;
 * it returns the substring or NULL (if allocation fails);
 * (15)the substring begins at index "start" and is of maximum size "len";
 * (21)allocates the substring using malloc;
 * !s is the same as s == 0, meaning, different than string(so it is empty);
*/

/*int	main(void)
{
	char arr[] = "banana";
	int	start = 2;
	size_t len = 2;
	char *aux = ft_substr(arr, start, len);
	
	puts(aux);
	return (0);
}*/