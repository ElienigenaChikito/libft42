/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:42:03 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/31 18:58:42 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	size_t	i;

	j = 0;
	if (little[0] == '\0')
		return ((char *)big); /* Retorna la cadena completa 'big' si little es vacío */
	while (big[j] && j < len)  /* Recorrer la cadena 'big' hasta llegar a la longitud 'len' o el final de la cadena */
	{
		if (big[j] == little[0])  /* Si el primer carácter de 'big' es igual al primer carácter de 'little' */
		{
			i = 0;
			while (little[i] && (big[j + i] == little[i]) && ((j + i) < len))  /* Comparar caracteres uno a uno de 'little' y 'big' */
				i++;
			if (little[i] == '\0')  /* Si hemos llegado al final de 'little', es decir, toda la subcadena coincide */
				return ((char *)big + j);  /* Devuelve la dirección de la primera aparición de 'little' en 'big' */
		}
		j++;  /* Si no hubo coincidencia, pasa al siguiente carácter en 'big' */
	}
	return (NULL);  /* Si no se encuentra 'little' en 'big' en la distancia 'len', retorna NULL */
}
/* encuentra una cadena de palabras, en otra str */