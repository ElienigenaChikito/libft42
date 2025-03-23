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
char    *ft_strjoin(const char *s1, const char *s2);
char    *ft_strtrim(const char *s1, const char *set);
char    **ft_split(const char *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(const char *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void  (*f)(unsigned int, char*));
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
//  f. bonus  //
//      estructurar las listas //
typedef struct s_list
{
    void    *content;
    struct s_list *next;
} t_list;
//    //
t_list  *ft_lstnew(void *content);
void    ft_lstadd_front(t_list **lst, t_list *new);
int     *ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstdelone(t_list *lst, void (*del)(void *));
void    ft_lstclear(t_list **lst, void (*del)(void *));
void    ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void (*f)(void *), void (*del)(void *));
#endif
