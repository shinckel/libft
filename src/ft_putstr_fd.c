/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:26:48 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/18 21:00:10 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd == -1)
		return ;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/* <non-standard> output a string to a file descriptor;
 * same as ft_putchar_fd, but writing char one by one (while s[i]);
 * return none;
 * you could solve this problem with write(fd, s, ft_strlen(s));
*/
