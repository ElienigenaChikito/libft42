/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:39:31 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/09 15:02:22 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char    *str;
    int     i;

    *str = (char *)malloc(sizeof(char *) * (ft_strlen(s) + 1));
    if(!str)
        return (NULL);
    i = 0;
    while (*s)
    {

    }
    return (str);
}
