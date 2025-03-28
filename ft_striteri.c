/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:48:40 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/11 17:03:20 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
//
// 
//
/*
															||
void	ft_striteri(char *s, void (*f)(unsigned int, char*))||
{															||//Creamos una variable para poder iterar.
	unsigned int	i = 0;									||
															||//Si nos falta algun argumento, retorna NULL.
	if (!s || !f)											||
		return ;											||//Mientras iteras en la string,
	while (s[i])											|| aplicamos, cambios con la funcion.
	{														||
		f(i, &s[i]);										||
		i++;												||
	}														||
}															||
															||
*/