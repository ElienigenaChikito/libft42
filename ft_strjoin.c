/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:28:44 by eoteros-          #+#    #+#             */
/*   Updated: 2025/02/20 17:08:57 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*copia;
	size_t	len1;
	size_t	len2;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	copia = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (copia == NULL)
		return (NULL);
	ft_strlcpy(copia, s1, ft_strlen(s1) + 1);
	ft_strlcat(copia + len1, s2, len2 + 1);
	return (copia);
}
// Une dos cadenas.
// 
// 
/*
															||
char	*ft_strjoin(const char *s1, const char *s2)			||
{															||//Creamos una variable donde almacenaremos la union.
	char	*copia;											||//Sacamos el largo de las 2 cadenas.
	size_t	len1 = ft_strlen(s1);							||
	size_t	len2 = ft_strlen(s2);							||//Si falta alguna de las cadenas, retornamos.
															||
	if ((s1 == NULL) || (s2 == NULL))						||//Asignamos memoria con el tamano de las dos
		return (NULL);										|| cadenas + un caracter '/0'.
	copia = (char *)malloc(sizeof(char) * (len1 + len2 + 1));|//Si no hay memoria asiganda, retornamos. 
	if (copia == NULL)										||
		return (NULL);										||//En copia, copiamos la primera cadena.
	ft_strlcpy(copia, s1, ft_strlen(s1) + 1);				||//En copia, concatenamos la segunda cadena,
	ft_strlcat(copia + len1, s2, len2 + 1);					|| asegurando que empieza al final de la primera cadena.
	return (copia);											||
}															||//Retornamos la cadena conjuntada.
															||
*/