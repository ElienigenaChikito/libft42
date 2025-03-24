/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:30:55 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/09 15:49:10 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}
// Funcion simple, devuelve "yes" si el caracter es "0 1 2 3 4 5 6 7 8 9".
// en este caso utiliza las comillas para que no lo detecte como un ASCII.