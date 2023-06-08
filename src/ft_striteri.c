/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:59:51 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/14 15:27:09 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/* <non-standard> applies a function to each character of a string; 
 * same as ft_strmapi, but without using malloc and with a none return;
 * therefore, it doesn't create a new string, just changing the existent...;
 * ...as it applies function f to each character;
 * (17)(unsigned int)compensates the possibility of a long string;
 */
