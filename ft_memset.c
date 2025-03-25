/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:55:54 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/10 15:48:53 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *)b;
	while (len > 0)
	{
		*temp = (unsigned char)c;
		temp++;
		len--;
	}
	return (b);
}
// Utiliza una str "*b", y remplaza sus caracteres por "(unsigned char)c",
// durante "len".
// 
// Utilizamos la misma idea que el ft_swap, pero usando una variable Unsigned Char
// esta variable previene algunos errores de signo.
//
/*
												||
												|| Primero hacemos un "espejo" de la str
void	*ft_memset(void *b, int c, size_t len)	||  en la que vamos a operar, y mientras
{												||  iteramos con len, cambiamos cada
	unsigned char	*temp;						||  caracter de *b con el valor de c.
												||
	temp = (unsigned char *)b;					|| Para prevenir un error, tenemos que
	while (len > 0)								||  cambiar c, y combertirlo al mismo
	{											||  valor que temp, (unsigned char).
		*temp = (unsigned char)c;				||
		temp++;									||
		len--;									||
	}											||
	return (b);									||
}												||
												||
*/