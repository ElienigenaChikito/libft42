/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:06:04 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/29 16:37:08 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*str;

	str = (char *)s;
	while (0 < n)
	{
		if (*str == (char)c)
			return ((void *)str);
		str++;
		n--;
	}
	return (0);
}
