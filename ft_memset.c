/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:27:11 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/22 13:11:30 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/* <string.h> fill memory with a constant byte;
 * writes len bytes of value c (converted to an unsigned char) to the string b;
 * it retuns a pointer to its first argument (b);
 * set a block of memory to a particular value (e.g.'a' in all array positions);
 * (15)it has no associated data type, it can be typecasted to anything;
 * (22)you can not deference a void pointer directly, you must typecast first;
 */

/*int	main(void)
{
	int		i = 0;
	char	buffer[] = "aaaaaaaaaa";

	ft_memset(buffer, '1', 5);
	while (i < 10)
	{
		printf("%c", buffer[i]);
		i++;
	}
	printf("\n");
}*/