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
