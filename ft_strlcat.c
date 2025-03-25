/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:26:33 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/20 15:15:08 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	if (size <= len_dst)
		return (size + len_src);
	len_src = ft_strlcpy(dst + len_dst, src, size - len_dst);
	return (len_dst + len_src);
}
// Hace Strcat, pero retorna las longitudes concatenadas, asi indica si  es"true".
//
//
/*
															||
size_t	ft_strlcat(char *dst, const char *src, size_t size)	||//Calculamos len "espejo" de
{															|| src y dst.
	size_t	len_dst = ft_strlen(dst);						|| 
	size_t	len_src = ft_strlen(src);						||//Cuando size es 0, devolvemos
															|| src completa.
	if (size == 0)											||
		return (len_src);									||//Si size es menor/igual a dst,
	if (size <= len_dst)									|| devolvemos lo que podemos de
		return (size + len_src);							|| src.
	len_src = ft_strlcpy(dst + len_dst, src, size - len_dst);|
	return (len_dst + len_src);								||//Si size es mayor, le damos el
}															|| espacio necesario con strlcpy,
															||
															||//devolvemos las len concaten.
*/