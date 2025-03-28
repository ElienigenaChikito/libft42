/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:33:29 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/11 16:38:42 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// En una Str, a cada iteracion dentro de la Str, aplicamos una funcion.
//
//
/*
																||
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))|
{																||//Creamos una str allocando memoria, esta tendra
	char	*str;												|| una copia de la str principal con los cambios.
	int			i = 0;											||//Creamos un iterador.
																||
	if (!s || !f)												||//Si faltan argumentos, retorna.
		return (NULL);											||
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));	||//Asignamos memoria, del tamano de la string 
	if (!str)													|| original acabada en nulo.
		return (NULL);											||
	while (s[i])												||//Si no se pudo asignar memoria, retorna.
	{															||
		str[i] = f(i, s[i]);									||//Iteramos en las 2 strings, por cada caracter de
		i++;													|| la original, usamos la funcion y la copiamos.
	}															||
	str[i] = '\0';												||//Terminamos la funcion original en '/0'.
	return (str);												||
}																||//Retornamos la copia.
																||
*/