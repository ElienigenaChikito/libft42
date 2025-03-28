/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:07:41 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/24 17:23:20 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
// Creamos un diplicado de una lista, habiendo modificado su contenido con una funcion.
// 
// 
/*
																	||
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{																	||//Creamos una lista vacia.
	t_list	*new_list = NULL;										||//Creamos un nodo espejo con
	t_list	*new_node;												|| el que trabajar.
	void	*new_content;											||//Creamos el rellenador de
																	|| contenido.
	if (!lst || !f || !del)											||
		return (NULL);												||//Si no nos han aportado algun
																	|| parametro, devolvemos NULL.
	while (lst)														||
	{																||//Mientras lista exista, al
		new_content = f(lst->content);								|| nodo espejo de contenido,
		new_node = ft_lstnew(new_content);							|| le aplicamos la funcion.
		if (!new_node)												||
		{															||//Alojamos memoria en la lista
			del(new_content);										|| nueva que queremos crear
			ft_lstclear(&new_list, del);							||//Si no se pudo alojar memoria
			return (NULL);											|| limpiamos el contenido que
		}															|| duplicamos, eliminamos la lista
		ft_lstadd_back(&new_list, new_node);						|| nueva y retornamos.
		lst = lst->next;											||//Si se ha podido, anadimos el
	}																|| codigo generado al final de
	return (new_list);												|| la lista duplicada, y pasamos
}																	|| al siguiente nodo.
																	||
																	||//Retornamos la nueva lista
																	|| duplicada
*/