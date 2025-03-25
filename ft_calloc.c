/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:15:14 by eoteros-          #+#    #+#             */
/*   Updated: 2025/02/04 17:12:50 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(count * size);
	if (tmp == NULL)
		return (NULL);
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
// Asigna Memoria con malloc, pero despues combirte cada byte a 0.
//
//
/*
												||
void	*ft_calloc(size_t count, size_t size)	||
{												||//Creamos un espejo para trabajar con
	unsigned char	*tmp = malloc(count * size);|| tamano asignado necesario. Si no hay
	size_t			i = 0;						|| memoria allocada, retorna NULL.
												||
	if (tmp == NULL)							||//Iteramos, mientras no se iguale al tamano
		return (NULL);							|| del malloc, y cada iteracion, la igualamos
	while (i < count * size)					|| a 0.
	{											||
		tmp[i] = 0;								||//Retornamos la variable creada.
		i++;									||
	}											||
	return (tmp);								||
}												||
												||
*/