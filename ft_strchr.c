/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:30:38 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/29 17:09:17 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		i;

	i = 0;
	ch = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return ((char *) &s[i]);
		i++;
	}
	if (ch == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
// Busca en una str, la primera aparicion de un caracter.
//
//
/*
										 ||
char	*ft_strchr(const char *s, int c) ||
{										 ||// Primero convertimos a caracter el int prop.
	char	ch = (char)c;				 ||// Creamos un iterador (si quieres).
	int		i = 0;						 ||
										 ||
	while (s[i] != '\0')				 ||// Iteramos en la str.
	{									 ||
		if (s[i] == ch)					 ||// Si encontramos coincidencia, retornamos la
			return ((char *) &s[i]);	 || direccion de donde ha pasado, sino, iteramos
		i++;							 ||
	}									 ||// Si ch es null, devuelve la direccion null
	if (ch == '\0')						 ||
		return ((char *) &s[i]);		 ||// Si no encuentra el caracter, tambien
	return (NULL);						 || retorna null.
}										 ||
										 ||
*/