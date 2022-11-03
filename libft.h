/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:12:23 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/01 18:29:00 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

/* <ctype.h> checks for an alphabetic character*/
int		ft_isalpha(int c);
/* <ctype.h> checks for a digit (0 through 9)*/
int		ft_isdigit(int c);
/* <ctype.h> checks for an alphanumeric character*/
int		ft_isalnum(int c);
/* <ctype.h> checks whether c fits into the ASCII character set*/
int		ft_isascii(int c);
/* <ctype.h> checks for any printable character*/
int		ft_isprint(int c);
/* <ctype.h> convert char to uppercase*/
int		ft_toupper(int c);
/* <ctype.h> convert char to lowercase*/
int		ft_tolower(int c);
/* <string.h> fill memory with a constant byte*/
void	*ft_memset(void *b, int c, size_t len);
/* <string.h> zero a byte string, it writes n zeroed bytes to the string s*/
void	ft_bzero(void *s, size_t n);
/* <string.h> calculate the length of a string*/
size_t	ft_strlen(const char *s);
/* <string.h> copy memory area, it returns the original value of dst.*/
void	*ft_memcpy(void *dst, const void *src, size_t n);
/* <string.h> same as memcpy, more secure when dst and src might overlap*/
void	*ft_memmove(void *dst, const void *src, size_t len);
/* <string.h> copy string, returns string length it tried to create(src+NULL)*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
/* <string.h> concatenate to an specific size, returns length of dst+src+NULL*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
/* <string.h> locate character in string, returns pointer first occurrence*/
char	*ft_strchr(const char *s, int c);
/* <string.h> same as strchr, last occurrence as extra r stands for reverse*/
char	*ft_strrchr(const char *s, int c);
/* <string.h> compare two strings, returns less, equal or more than 0*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/* <string.h> find the first occurrence of a character in a buffer*/
void	*ft_memchr(const void *s, int c, size_t n);
/* <string.h> compare memory areas, same as strncmp but typecasting memory*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/* <string.h> locate a substring in a string, returns a pointer to little[0]*/
char	*ft_strnstr(const char *big, const char *little, size_t len);
/* <stdlib.h> convert a string to an integer*/
int		ft_atoi(const char *str);

#endif