/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:07:25 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/24 14:18:31 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
// Itera en la lista, hasta el final.
// 
//
/*
									||
t_list	*ft_lstlast(t_list *lst)	||
{									||//Si la lista no existe, devuelve NULL.
	if (!lst)						||
		return (NULL);				||//Mientras lista exista, cambia al siguiente
	while (lst->next)				|| nodo.
		lst = lst->next;			||
	return (lst);					||//Retorna el ultimo nodo.
}									||
									||
*/