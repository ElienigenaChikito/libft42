/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:58:17 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/29 18:22:53 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
// Retorna "yes" si no hay diferencia, si existe la diferencia retorna esa parte.
//
//
/*
																	||
int	ft_strncmp(const char *s1, const char *s2, size_t n)			||
{																	||//Creamos un iterador.
	size_t	i = 0;													||
																	||//Mientras iteramos en
	while ((s1[i] || s2[i]) && i < n)								|| las str, y el iterador
	{																|| sea menor a lo que
		if ((unsigned char) s1[i] != (unsigned char) s2[i])			|| nos piden en "n"
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);	||
		i++;														||//Si encuentra
	}																|| diferencia, retornala
	return (0);														||
}																	||//Si no hay diferencia
																	|| retorna NULL.
*/