/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:25:33 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/29 14:49:08 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = c;
	i = ft_strlen(s);
	if (a == '\0')
		return ((char *) &s[i]);
	while (i >= 0)
	{
		if (s[i] == a)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
// Busca en una str, la primera aparicion de un caracter desde el final.
//
//
/*
											||
char	*ft_strrchr(const char *s, int c)	||
{											||//El iterador es el final de la str.
	int		i = ft_strlen(s);				||
	char	a = c;							||//Convertimos el int prop, en un char.
											||
	if (a == 0)								||//Retornamos NULL si int es NULL.
		return ((char *) &s[i]);			||
	while (i >= 0)							||//Mientras iteramos en reversa,
	{										|| buscamos una coincidencia, si la hay,
		if (s[i] == a)						|| retornamos la direccion de la coincidencia.
			return ((char *)&s[i]);			||
		i--;								||//Si no encuentra coincidencia, retorna NULL
	}										|| tambien.
	return (0);								||
}											||
											||
*/