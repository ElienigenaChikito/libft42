/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:26:41 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/20 13:54:34 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tdst;
	const char	*tsrc;

	tdst = (char *) dst;
	tsrc = (const char *) src;
	if (dst > src && dst < src + len)
	{
		while (len > 0)
		{
			tdst[len - 1] = tsrc[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
// copia la str, respetando el espacio y la anterior *str.
//
//
/*

void	*ft_memmove(void *dst, const void *src, size_t len)
{														||
	char		*mirror_dst = (char *) dst;				||  Creamos "espejos" en los que
	const char	*mirror_src = (const char *) src;		|| vamos a trabajar.
														||
	if (dst > src && dst < src + len)					||//si hay espacio suficiente...
	{													|| reflejamos (sin el nulo "\0")
		while (len > 0)									|| toda la str (*src) en (*dst).
		{												||
			mirror_dst[len - 1] = mirror_src[len - 1];	|| todo mientras iteramos en len.
			len--;										|| como hay espacio suficiente, el
		}												|| nulo se respeta en dst.
	}													||
	else												||//si no hay espacio suficiente...
		ft_memcpy(dst, src, len);						|| 
	return (dst);										||
}														||
														||
*/