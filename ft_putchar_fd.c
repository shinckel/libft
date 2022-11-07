/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:19:01 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/07 12:25:45 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* <non-standard> output a char to a file descriptor;
 * when you open a file, the operating system creates an entry;
 * these entries are represented by integers;
 * file descriptor = int number that uniquely represents an opened file; 
 * return none;
 */
