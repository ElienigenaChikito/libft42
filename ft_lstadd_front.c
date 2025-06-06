/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:06:18 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/24 15:50:53 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// Anade un nuevo nodo al la lista al principio.
//
//
/*
													||
void	ft_lstadd_front(t_list **lst, t_list *new)	||
{													||//Si no existe lista o nodo, retorna.
	if (!lst || !new)								||
		return ;									||//Mueve la lista a la derecha.
	new->next = *lst;								||
	*lst = new;										||//Anade new al principio.
}													||
													||
*/