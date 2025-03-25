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
		return ((char *)big);
	while (big[j] && j < len)
	{
		if (big[j] == little[0])
		{
			i = 0;
			while (little[i] && (big[j + i] == little[i]) && ((j + i) < len))
				i++;
			if (little[i] == '\0')
				return ((char *)big + j);
		}
		j++;
	}
	return (NULL);
}
// Busca dentro de la str "big", el primer momento en el que aparezca la str "little"
// dentro de la len n.
//
/*
																			||
char	*ft_strnstr(const char *big, const char *little, size_t len)		||
{																			||//Creamos 2
	size_t	j = 0;															|| iteradores.
	size_t	i;																||
																			||//Si no hay
	if (little[0] == '\0')													|| little, solo
		return ((char *)big);												|| devuelve Big.
	while (big[j] && j < len)												||
	{																		||//Mientras
		if (big[j] == little[0])											|| iteramos en
		{																	|| big y len,
			i = 0;															||
			while (little[i] && (big[j + i] == little[i]) && ((j + i) < len))|//Si coinciden
				i++;														|| itera.
			if (little[i] == '\0')											|| Si little
				return ((char *)big + j);									|| llega a NULL.
		}																	|| Devuelve el
		j++;																|| primer momento
	}																		|| en el que
	return (NULL);															|| aparece litte.
}																			||
																			||//Sino devuelve
																			|| NULL
*/