/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:56:20 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/24 13:59:50 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
// Funcion para generar una nueva lista.
// 
//
/*
												||
t_list	*ft_lstnew(void *content)				||
{												||//Creamos una lista asignando memoria con la 
	t_list	*new_node = malloc(sizeof(t_list));	|| variable proporcionada en la "libft.h".
												||
	if (!new_node)								||//Si no se ha podido asignar memoria, retorna.
		return (NULL);							||
	new_node->content = content;				||//En la nueva lista, anade el contenido,
	new_node->next = NULL;						|| el siguiente nodo se iguala a Final de lista.
	return (new_node);							|| retornas la nueva lista.
}												||
												||
*/