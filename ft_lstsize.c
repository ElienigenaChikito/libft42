/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:07:59 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/24 15:28:57 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
// Devuelve el tamano de la lista.
// 
//
/*
								||
int	ft_lstsize(t_list *lst)		||
{								||//Itera sobre la lista, anadiendo
	int	count = 0;				|| sumando el valor de count por cada vez 
								|| que itera.
	while (lst)					||
	{							||//Retorna count.
		count++;				||
		lst = lst->next;		||
	}							||
	return (count);				||
}								||
								||
*/