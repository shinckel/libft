/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:08:12 by shinckel          #+#    #+#             */
/*   Updated: 2023/05/16 14:12:57 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_number_size(int n)
{
	unsigned int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len += 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*aux;
	unsigned int	len;
	unsigned int	num;

	len = ft_number_size(n);
	aux = (char *)malloc(sizeof(char) * (len + 1));
	if (aux == NULL)
		return (NULL);
	if (n == 0)
		aux[0] = '0';
	if (n < 0)
	{
		aux[0] = '-';
		num = -n;
	}
	else
		num = n;
	aux[len] = '\0';
	while (num != 0)
	{
		aux[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (aux);
}