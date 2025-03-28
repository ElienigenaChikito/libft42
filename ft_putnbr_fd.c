/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:59:49 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/12 15:49:45 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}
//
// 
// 
/*
											||
void	ft_putnbr_fd(int n, int fd)			||
{											||//Comprobante de que no sobrexceda la capacidad "Int",
	if (n == -2147483648)					|| si es eso, imprime el numero tal cual "-2147483648".
	{										||
		write(fd, "-2147483648", 11);		||//Si el integer es menor a 0, imprimimos un simbolo "-",
		return ;							|| y combertimos el numero, a su valor positivo.
	}										||
	if (n < 0)								||//Si el numero es mayor a 1, imprimimos el numero y 
	{										|| dividimos.
		ft_putchar_fd('-', fd);				||
		n = -n;								||//ponemos el resultado del divisor, con el valor asci
	}										|| (sumando 0).
	if (n >= 10)							||
		ft_putnbr_fd(n / 10, fd);			||
	ft_putchar_fd((n % 10) + '0', fd);		||
}											||
											||
*/