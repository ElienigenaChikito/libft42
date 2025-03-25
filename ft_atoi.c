/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:53:55 by eoteros-          #+#    #+#             */
/*   Updated: 2025/02/04 14:14:15 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}
// (1) Utiliza isspace para saltar espacios en blanco.
// (2) Es una funcion que combierte los argumentos en integers.
//
//
/*
____________________________________________________||
static int	ft_isspace(char c)						||
{													||//Devuelve NULL, si c se iguala a ' '
	return (c == ' ' || (c >= '\t' && c <= '\r'));	|| o cualquier espacio en blanco/salto.
}													|| 
____________________________________________________||
int	ft_atoi(const char *str)						||
{													||
	int	i = 0;										||//Creamos iterador
	int	sign = 1;									||//Creamos el multiplicador de signo.
	int	num = 0;									||//Creamos un espejo en el que trabajar.
													||
	while (ft_isspace(str[i]))						||//Iteramos la str mientras haya espacios
		i++;										|| en blanco.
	if (str[i] == '-' || str[i] == '+')				||
	{												||//Si el primer caracter es un simbolo -
		if (str[i] == '-')							|| combierte el multiplicador, e itera.
			sign = -1;								||
		i++;										||//Mientras la str sea un digito itera
	}												|| multiplicando * 10 cada caracter de str
	while (ft_isdigit(str[i]))						|| se resta el primer numero que aparece
	{												|| en ASCII, para que no salga otro.
		num = num * 10 + (str[i] - '0');			||
		i++;										||//Retorna el numero obtenido por el
	}												|| multiplicador, para que al fin tenga
	return (num * sign);							|| sentido.
}													||
													||
*/