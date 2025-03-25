/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:24:52 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/13 17:21:58 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*mirrordst;
	unsigned char	*mirrorsrc;

	if (src == NULL && dst == NULL)
		return (dst);
	mirrordst = (unsigned char *)dst;
	mirrorsrc = (unsigned char *)src;
	while (n > 0)
	{
		*mirrordst = *mirrorsrc;
		mirrordst++;
		mirrorsrc++;
		n--;
	}
	return (dst);
}
// copia la str, nno le importa lo que antes hubiera.
//
//
/*

void	*ft_memcpy(void *dst, const void *src, size_t n)
{														||
	unsigned char	*mirrordst = (unsigned char *)dst;	||  Creamos espejos en los que
	unsigned char	*mirrorsrc = (unsigned char *)src;	|| trabajar.
														||
	if (src == NULL && dst == NULL)						||//Si no hay nada, devuelve nada
		return (dst);									|| (obvio)
	while (n > 0)										||//mientras lenght,
	{													|| copiamos src en dst, no le importa
		*mirrordst = *mirrorsrc;						|| el overlaping de memoria.
		mirrordst++;									||
		mirrorsrc++;									||//si tiene que comerse o anadir un
		n--;											||  "\0", lo hara.
	}													||
	return (dst);										||
}														||
														||
*/