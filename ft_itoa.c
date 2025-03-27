/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:51:12 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/09 12:51:37 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int		count;
	long	num;

	count = 1;
	num = n;
	if (num < 0)
	{
		count++;
		num = -num;
	}
	while (num >= 10)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	long	num;

	num = n;
	size = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (--size >= 0)
	{
		if (str[size] == '-')
			break ;
		str[size] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
// Transforma un Integer (numero), a argumento.
//
// (1) Funcion que ayuda a saber cuanta memoria hay que asignar para combertir el integer.
//
// (2) Funcion que transforma el Integer a Argumento
//
/*
															||
static int	ft_numlen(int n)								||
{															||//Creamos variable que cuenta los numeros.
	int		count = 1;										||//Creamos un espejo para trabajar.
	long	num = n;										||
															||//Comprobamos que el numero no sea negativo,
	if (num < 0)											|| si lo es, lo combertmos a positivo.
	{														||
		count++;											||//Mientras el numero sea mayor/igual a 10,
		num = -num;											|| dividimos entre 10, (100 = 10 = 1/), y
	}														|| incrementamos Count.
	while (num >= 10)										||
	{														||//Retornamos count.
		num /= 10;											||______________________________________________
		count++;											||
	}														||
	return (count);											||//Creamos un espejo, asignando memoria.
}															||//La memoria necesaria esta registrada gracias
															|| a la funcion que hemos creado arriba.
char	*ft_itoa(int n)										||//Creamos un espej del integer que nos han dado
{															|| para poder trabajar sobre el.
	char	*str = (char *)malloc(sizeof(char) * (size + 1));|
	int		size = ft_numlen(n);							||//Comprobamos que la asignacion de memoria no
	long	num = n;										|| haya fallado.
															||
	if (!str)												||//Nos aseguramos que la str, creada, termine en '/0'
		return (NULL);										||
	str[size] = '\0';										||//Si el numero es negativo, lo combertimos.
	if (num < 0)											||
	{														||//Mientras recorremos el tamano de el integuer.
		str[0] = '-';										||
		num = -num;											||	//Creamos un seguro por si encuentra un simbolo
	}														||	negativo que no hemos combertido
	while (--size >= 0)										||
	{														||//Desde el final del integer, copiamos el primer
		if (str[size] == '-')								|| numero + el valor ASCII de '0' (combertirlo a numero)
			break ;											|| y le quitamos un numero y lo movemos.
		str[size] = (num % 10) + '0';						||
		num /= 10;											||
	}														||
	return (str);											||
}															||
															||
*/