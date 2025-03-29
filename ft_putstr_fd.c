/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:33:06 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/11 17:37:27 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
	}
}
// Escribe una Str, en el "file" indicado.
// 
//
/*
										||
void	ft_putstr_fd(char *s, int fd)	||
{										||//Comprobamos que haya Str.
	if (s)								||
	{									||//Mientras recorremos la str, en el file designado,
		while (*s)						|| escribimos la Str.
		{								|| s++: para incrementar y recorer la str.
			write(fd, s, 1);			||
			s++;						||
		}								||
	}									||
}										||
										||
*/