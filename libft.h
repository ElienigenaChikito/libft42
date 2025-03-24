/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:39:31 by eoteros-          #+#    #+#             */
/*   Updated: 2025/02/20 13:39:23 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <ctype.h>
# include <stdlib.h>

// es esto? //
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
// mayuscula, minuscula //
int		ft_toupper(int c);
int		ft_tolower(int c);
// la string ...//
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
// duplica str //
char	*ft_strdup(const char *s1);
// cambios de memoria //
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
// busca aqui //
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
//
void	*ft_memchr(const void *s, int c, size_t n);
// compara //
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
//  atoi  , imprime solo numeros, si empieza asi//
int		ft_atoi(const char *str);
// calloc , combierte el malloc a '0'//
void	*ft_calloc(size_t count, size_t size);
// f. no existentes //
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif
