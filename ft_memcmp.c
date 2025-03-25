/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:19:26 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/29 18:38:13 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	size_t		i;

	i = 0;
	str1 = (const char *) s1;
	str2 = (const char *) s2;
	while (i < n)
	{
		if ((char) str1[i] != (char) str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}
// Comprueba si hay diferencias entre 2 espacios de memoria. Sino retorna NULL.
//
//
/*
																		||
int	ft_memcmp(const void *s1, const void *s2, size_t n)					||
{																		||//Creamos espejos
	const char	*str1 = (const char *) s1;								|| para trabajar.
	const char	*str2 = (const char *) s2;								||
	size_t		i = 0;													||//Creamos iterador
																		||
	while (i < n)														||//Iteramos en n,
	{																	|| si hay diferencia
		if ((char) str1[i] != (char) str2[i])							|| devuelvela.
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);	||
		i++;															||//Si no hay,
	}																	|| devuelve NULL.
	return (0);															||
}																		||
																		||
*/