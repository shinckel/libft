/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:22:19 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/22 13:10:46 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	int		i;
	char	*dst;
	char	*src;

	i = 0;
	dst[] = "soraia";
	src[] = "jose";
	ft_memcpy(dst, src, sizeof(char) * 4);
	while (dst[i])
	{
		printf("%c", dst[i]);
		i++;
	}
	printf("\n");
}*/