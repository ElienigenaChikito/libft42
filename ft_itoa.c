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
