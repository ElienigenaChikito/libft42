/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:06:33 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/24 14:13:24 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
// Limpia la lista creada.
//
//
/*
														||
void	ft_lstclear(t_list **lst, void (*del)(void *))	||
{														||//Creamos un nodo temporal con el que
	t_list	*temp;										|| vaciaremos la lista.
														||
	if (!lst || !del)									||//Protegemos de errores con los argumentos.
		return ;										||
	while (*lst)										||//Mientras recorremos la lista,
	{													|| temporal se combierte en el inicio,
		temp = (*lst)->next;							|| borramos inicio, inicio se combierte en temporal.
		ft_lstdelone(*lst, del);						||  repetir.
		*lst = temp;									||
	}													||
}														||
														||
*/