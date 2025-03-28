/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:36:03 by eoteros-          #+#    #+#             */
/*   Updated: 2025/02/20 16:17:41 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
// Retornamos una Str, extrayendola de una Str ya proporcionada.
// 
// 
/*
																||
char	*ft_substr(char const *s, unsigned int start, size_t len)|
{																||//Creamos una variable donde copiaremos la str
	char	*sub;												|| copiada.
	size_t	s_len = ft_strlen(s);								||//Calculamos el tamano de la Str original.
																||
	if (s == NULL)												||//Buscamos errores:
		return (NULL);											|| //Si no hat Str: retornamos NULL.
	if (start >= s_len)											|| //Si el comiendo de donde tenemos que copiar, es
		return (ft_strdup(""));									||  mayor a la STR original, devolvemos vacio.
	if (len > s_len - start)									|| //Si la longitud pedida, es mayor a lo que la
		len = s_len - start;									||  cadena puede copiar, reajustamos la longitud.
	sub = (char *)malloc(sizeof(char) * (len + 1));				||
	if (sub == NULL)											||//Asignamos memoria, anadiendo Nulo.
		return (NULL);											||//Si falla la asignacion, retorna NULL.
	ft_strlcpy(sub, s + start, len + 1);						||
	return (sub);												||//Copia la cadena.
}																||
																||//Retorna la cadena copiada.
*/