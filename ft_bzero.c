/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:59:22 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/11 17:21:31 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
// Utiliza una str "*s", y remplaza sus caracteres por 0 ,durante "len".
// 
// Utilizamos la funcion memset, pasandole los valores "*sting", y "len";
// pero nos aseguramos que el " int (unsigned char)c " sea 0.
//
//
/*
													||
void	*ft_memset(void *s, int 0, size_t n)		||
{													||
	unsigned char	*mirror = (unsigned char *)s;	||//Creamos un espejo en el
													|| que vamos a trabajar.
	while (n > 0)									||//Mientras len(n), cambiamos
	{												|| los caracteres de la string
		*mirror = (unsigned char)0;					|| por un 0.
		mirror++;									||
		n--;										||
	}												||
	return (s);										||
}													||
													||
*/