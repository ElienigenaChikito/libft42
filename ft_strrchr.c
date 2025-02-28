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

	a = c; /* combierte c, en un caracter */
	i = ft_strlen(s); /* la longitud es de la string */
	if (a == 0)	/* si no hay caracter que buscar, devuelve NULL */
		return (NULL);
	while (i >= 0) /* contar desde atras */
	{
		if (s[i] == a)
			return ((char *)&s[i]); /* devuelve la direccion de donde esta el caracter */
		i--;
	}
	return (0);
}
/* desde el final, busca la primera aparicion de c */