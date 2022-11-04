/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:02:49 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/04 14:27:38 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	char	*aux;
	int		len;

	len = ft_strlen(s) + 1;
	copy = (char *)malloc(sizeof(char) * len);
	if (copy == NULL)
		return (0);
	aux = copy;
	while (*s)
	{
		*aux = *s;
		aux++;
		s++;
	}
	*aux = '\0';
	return (copy);
}

/* <string.h> creates a dupplicate for the string passed as parameter;
 * same as strcpy, but only one char pointer as argument;
 * it creates string copies when you don't know the original string size;
 * (23)the function itself allocates space for the suplicate string (malloc);
 * (22)the copy includes the null character (\0);
 * (24)if space can’t be allocated, the function returns a NULL pointer;
 * otherwise, it returns a pointer to the duplicated string;
 * you must typecast malloc to (char *);
 * swapping two char pointers;
*/
