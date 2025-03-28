/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:47:31 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/11 17:52:49 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
		write(fd, "\n", 1);
	}
}
// Iteras hasta el final de la Str que nos da, y le pone un final de linea '/n'
// 
// 
/*
										||
void	ft_putendl_fd(char *s, int fd)	||//Itera en la Str, hasta llegar a su final,
{										||
	if (s)								|| cuando llega al final, escribe '/n'.
	{									||
		while (*s)						||
		{								||
			write(fd, s, 1);			||
			s++;						||
		}								||
		write(fd, "\n", 1);				||
	}									||
}										||
										||
*/