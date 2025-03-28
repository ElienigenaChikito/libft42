/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:29:39 by eoteros-          #+#    #+#             */
/*   Updated: 2025/02/28 13:53:01 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*copia;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	if (*s1 == '\0')
		return (ft_strdup(""));
	if (*set == '\0')
		return (ft_strdup(s1));
	len1 = 0;
	while (s1[len1] && ft_strchr(set, s1[len1]))
		len1++;
	len2 = ft_strlen(s1);
	while (len2 > len1 && ft_strchr(set, s1[len2 - 1]))
		len2--;
	copia = (char *)malloc(sizeof(char) * (len2 - len1 + 1));
	if (copia == NULL)
		return (NULL);
	ft_strlcpy(copia, s1 + len1, len2 - len1 + 1);
	return (copia);
}
// Recorta una cadena, empezando desde Set.
// 
//
/*
															||
char	*ft_strtrim(const char *s1, const char *set)		||
{															||//Creamos una variable donde pondremos una copia
	char	*copia;											|| de la cadena recortada.
	size_t	len1 = 0;										||//Creamos un iterdor.
	size_t	len2 = ft_strlen(s1);							||//Creamos una variable para calcular la longitud de
															|| la primera cadena.
	if (s1 == NULL)											||
		return (NULL);										||//Comprobamos errores:
	if (set == NULL)										|| //No hay cadena principal: Null
		return (ft_strdup(s1));								|| //No hay Set: Retornamos la cadena 1 completa.
	if (*s1 == '\0')										|| //La cadena es un caracter vacio: retornamos
		return (ft_strdup(""));								||   un caracter vacio.
	if (*set == '\0')										|| //Set es Nulo: retornamos la cadena 1 completa.
		return (ft_strdup(s1));								||
	while (s1[len1] && ft_strchr(set, s1[len1]))			||//Iteramos en la cadena hasta encontrar la primera
		len1++;												|| coincidencia de Set.
	while (len2 > len1 && ft_strchr(set, s1[len2 - 1]))		||//Restamos tamano a la logitud de la cadena, para
		len2--;												|| asignar mejor a memoria.
	copia = (char *)malloc(sizeof(char) * (len2 - len1 + 1));|
	if (copia == NULL)										||//Asignamos memoria.
		return (NULL);										||//Si no hay asignacion, retorna.
	ft_strlcpy(copia, s1 + len1, len2 - len1 + 1);			||
	return (copia);											||//Hacemos la copia, empezando desde Set, y durante la
}															|| longituds deseada (la resta de donde empezamos y la
															|| longitud original + nulo).
															||
															||//Retornamos la copia.
*/