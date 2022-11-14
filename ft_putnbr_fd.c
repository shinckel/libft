/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:04:54 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/14 13:20:02 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = (unsigned int)n * -1;
	}
	if (n > 0)
		num = (unsigned int)n;
	if (num > 9)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd(num % 10 + 48, fd);
}

/* <non-standard> output a number to a file descriptor;
 * you can interpret the nature of this problem much as itoa;
 * (22)if int surpass the maximum (consideting int datatype), you must typecast;
 * (unsigned int)always non-negative in the range[0 to 4294967295]; 
 * size of int(4 bytes) from -2147483648 to 2147483647;
 * (27)recursive function;
 */
