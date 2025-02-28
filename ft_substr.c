/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:36:03 by eoteros-          #+#    #+#             */
/*   Updated: 2025/02/20 13:47:37 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub; /* copia, que es lo que queremos */
	size_t	i;

	sub = (char *)malloc(sizeof(char) * (len + 1)); /* el tamaño de la cadena copia sera len + nulo */
	i = 0;
	if ((s || sub) == NULL)
		return (NULL); /* si no hay nada, que devuelva nada*/
	if (start >= ft_strlen(s))
		return (ft_strdup("")); /* si el inicio esta fuera de la cadena, devuelve un espacio vacio */
	if (len > (ft_strlen(s) - start)) /* si el tamaño dado es >a la longitud de la cadena... */
		len = ft_strlen(s) - start;	/* ...ajustamos el tamaño, para copiar todo el resto de la cadena hasta nulo */
	while (i < len)
	{
		sub[i] = s[start + i]; /* en la copia, copiamos caracteres desde 0, y "start + 0"... */
		i++;				   /* hasta que i ha alcanzado lo largo de la cadena */
	}
	sub[i] = '\0';		/* acabamos en "final" */
	return (sub);		/* devuelve la copia */
}
/* desde start, en una distancia "len", copia solo esos caracteres */