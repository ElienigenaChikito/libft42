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
