/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:41:53 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/16 15:36:31 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (destsize > 0)
	{
		while (i < (destsize - 1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
// Hace memcpy, pero lo que devuelve es informacion sobre un truncamiento.
//
//
/*

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{														||
	size_t	i = 0;										||//Creamos un iterador.
	size_t	src_len = ft_strlen(src);					||//Calculamos la len de src.
														||
	if (destsize > 0)									||//Si hay len que copiar:
	{													||//mientras no lleguemos a NULL:
		while (i < (destsize - 1) && src[i] != '\0')	|| copiaremos src en dst.
		{												||
			dst[i] = src[i];							|| Y terminaremos dst en NULL;
			i++;										||
		}												||
		dst[i] = '\0';									||
	}													||
	return (src_len);									||
}														||//Devuelve la len para saber si
														|| habia truncamiento.
*/