/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:08:12 by shinckel          #+#    #+#             */
/*   Updated: 2023/06/28 10:25:21 by shinckel         ###   ########.fr       */
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

/*
 *n = the integer to convert;
 *it returns the string representing the integer, or NULL if allocation fails;
 *negative numbers must be handled;
 *the first function solves the string len, the second how to assign each char;
 *(static unsigned int)is a special variable, every call changes the value...;
 *...so, it keeps the variable updated until the execution is done;
 *(static unsigned int)is a special function too(can be used only inside scope);
 *(15)you must discover the nature of the number (size for allocating bytes);
 *divide it by ten for discovering how many decimal positions;
 *(42)you must solve zero, negative and positive scenarios;
 *while n != 0, assign the remainder(modulo division) to the (len  *1) position;
 *so the code writes each int, transformed into char (+ '0'), in reverse order;
 */