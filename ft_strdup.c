/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:41:04 by eoteros-          #+#    #+#             */
/*   Updated: 2025/02/04 17:11:21 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copia;
	size_t	i;

	i = 0;
	copia = (char *) malloc(ft_strlen(s1) + 1);
	if (copia == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		copia[i] = s1[i];
		i++;
	}
	copia[i] = '\0';
	return (copia);
}
// Crea una copia de una str. Utiliza malloc.
//
//
/*
														||
char	*ft_strdup(const char *s1)						||
{														||//Creamos memoria para copia con el
	char	*copia = (char *) malloc(ft_strlen(s1) + 1);|| tamano suficiente + '\0' para
	size_t	i = 0;										|| copiar la cadena.
														||
	if (copia == NULL)									||//Si no hay memoria, retorna NULL.
		return (NULL);									||
	while (s1[i] != '\0')								||//Iteramos en la str, copiando
	{													|| caracter por caracter la str.
		copia[i] = s1[i];								||
		i++;											||//Terminamos la copia con '\0'.
	}													||
	copia[i] = '\0';									||//Retornamos la copia.
	return (copia);										||
}														||
														||
*/