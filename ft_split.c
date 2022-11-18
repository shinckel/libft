/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:23:45 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/18 21:14:42 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char *s, char c)
{
	int	i;
	int	words;

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

/* word_count = how many substrings are there inside the string s?;
 * you must develop two differents counters, one for coutings the words...;
 * ...and other for jumping the separators and letters (i);
 * (29)protection for when you reach the end of the string;
*/

static void	str_cpy(char *word, char *str, char c, int j)
{
	int	i;

	i = 0;
	while (str[j] != '\0' && str[j] == c)
		j++;
	while (str[j + i] != c && str[j + i] != '\0')
	{
		word[i] = str[j + i];
		i++;
	}
	word[i] = '\0';
}

/* str_cpy = how to copy the substring inside an allocated(malloc) string?;
 * (*word)pointer returned from str_alloc(dynamic allocation of memory);
 * inside this function you separate in which index are the substrings...;
 * ...then, you copy these portions (word[i] = str[j + i]);
*/

static char	*str_alloc(char *s, char c, int *k)
{
	int		j;
	char	*word;

	j = *k;
	while (s[*k])
	{
		if (s[*k] != c)
		{
			while (s[*k] && s[*k] != c)
				*k += 1;
			word = (char *)malloc(sizeof(char) * (*k + 1));
			if (word == NULL)
				return (NULL);
			break ;
		}
		*k += 1;
	}
	str_cpy(word, s, c, j);
	return (word);
}

/* str_alloc = how to allocate memory for each string individually?;
 * the *word pointer created here will then feed the str_cpy function;
 * you must copy the substrings directly on the *word allocated memory;
 * (*k)store the position of each substring(for then copying each one); 
*/

char	**ft_split(char const *s, char c)
{
	int		start;
	int		end;
	int		pos;
	char	**aux;

	if (!s)
		return (NULL);
	start = 0;
	pos = 0;
	end = word_count((char *)s, c);
	aux = (char **)malloc(sizeof(char *) * (end + 1));
	if (!aux)
		return (NULL);
	aux[end] = NULL;
	while (start < end)
	{
		aux[start] = str_alloc((char *)s, c, &pos);
		start++;
	}
	return (aux);
}

/* <non-standard> splits a string using a char as parameter;
 * how to allocate memory for the array of strings(size = 8 bytes)?;
 * s = the string to be split, c = the delimiter character; 
 * it returns a pointer of a pointer(array of strings, 2D array on heap memory);
 * the array must end with a NULL pointer;
 * (start-end)first array index, pointing for each string of the list (e.g.argc);
 * (&pos)second array index, pointing for each char inside the string (e.g.argv);
 */

/*int main(void)
{
	int i = 0;
	char	*s = "***Sofia**Hinckel*Dias*Sara*Schulze*Hinckel";
	char	**splt;
	splt = ft_split(s, '*');
	while (splt[i])
	{
		printf("%s\n", splt[i]);
		i++;
	}
	return (0);
}*/