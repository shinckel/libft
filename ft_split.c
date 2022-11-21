/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:23:45 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/21 17:59:41 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	unsigned int	i;
	unsigned int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
			if (s[i] == '\0')
				return (words);
		}
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	start;
	unsigned int	end;
	char			**aux;

	end = word_count(s, c);
	aux = (char **)malloc((end + 1) * sizeof(char *));
	if (!aux)
		return (NULL);
	start = 0;
	j = 0;
	while (start < end)
	{
		i = 0;
		while (s[j] != '\0' && s[j] == c)
			j++;
		while (s[j + i] != c && s[j + i] != '\0')
			i++;
		aux[start] = ft_substr(s, j, i);
		start++;
		j += i;
	}
	aux[end] = NULL;
	return (aux);
}

/* <non-standard> splits a string using a char as parameter;
 * s = the string to be split, c = the delimiter character; 
 * it returns a pointer of a pointer(array of strings, 2D array on heap memory);
 * the array must end with a NULL pointer;
 * (start-end)first array index, pointing for each string of the list (e.g.argc);
 */

/*int main(void)
{
	int i = 0;
	char	*s = "***Sofia**Hinckel*Dias**Sara*Schulze*Hinckel";
	char	**splt;
	splt = ft_split(s, '*');
	 while (splt[i])
	{
		printf("%s\n", splt[i]);
		i++;
	}
	return (0);
}*/