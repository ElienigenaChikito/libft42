/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:14:43 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/11 17:19:23 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// Es un Ft_putchar, pero es mas comodo en manejo de errores con su "File Descriptor".
// 
// 
/*
										||
void	ft_putchar_fd(char c, int fd)	||//Nos indica el carcter que hay que cambiar,
{										|| En el integuer que quiere cambiar.
	write(fd, &c, 1);					||
}										||
										||
*/