/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:19:01 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/18 21:16:03 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd == -1)
		return ;
	write(fd, &c, 1);
}

/* <non-standard> output a char to a file descriptor;
 * when you open a file, the operating system creates an entry;
 * these entries are represented by integers;
 * file descriptor = int number that uniquely represents an opened file;
 * open() returns a file descriptor, a small, nonnegative integer;
 * open() and creat() return the new file descriptor, or -1 if an error occurred;
 * return none;
 */