/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:07:11 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/24 14:17:26 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// Itera sobre la lista, pero aplica una funcion proporcionada.
// 
//
/*
													||
void	ft_lstiter(t_list *lst, void (*f)(void *))	||
{													||//Si no hay lista/funcion, devuelve NULL.
	if (!lst || !f)									||
		return ;									||//Mientras lista exista, Aplica la funcion
	while (lst)										|| dentro del contenido del primer nodo,
	{												|| y pasa al siguiente nodo.
		f(lst->content);							||
		lst = lst->next;							||
	}												||
}													||
													||
*/