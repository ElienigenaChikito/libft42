/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:06:54 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/24 15:36:40 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// Borra un nodo de la lista, primero elimina el contenido y luego libera
// la memora utilizada.
//
/*
														||
void	ft_lstdelone(t_list *lst, void (*del)(void *))	||
{														||//Si no hay lista, o funcion borrar.
	if (!lst || !del)									|| retorna NULL.
		return ;										||
	del(lst->content);									||//Si hay ambas, elimina el contenido.
	free(lst);											||
}														||//Libera la memoria.
														||
*/