/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:30:27 by shinckel          #+#    #+#             */
/*   Updated: 2023/06/28 10:01:12 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

// int main(void)
// {
// 	int	a;
// 	int	b;
// 	a = ft_atoi("   +12345");
// 	b = ft_atoi("      *896664");
// 	printf("a: %d | b: %d\n", a, b);
// 	return (0);
// }

/*
 * (22)first, solve the space problem (jump it);
 * (24)then, turn the value of sign negative if the found symbol is minus;
 * (26)jump the symbol;
 * (28)when finding characters that correspond to numbers;
 * (30)transform into integer(*str  * '0') and add it to its decimal(res * 10);
 * (30)e.g."1234", 1000 + 200 + 30 + 4;
 */