/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:06:04 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/24 17:03:58 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
// Nos dan un nuevo argumento para a la lista, y lo anadimos al final.
//
//
/*
													||
void	ft_lstadd_back(t_list **lst, t_list *new)	||
{													||//Si existe lista, ves al final de ella, y anade
	if (*lst)										|| "new".
		ft_lstlast(*lst)->next = new;				||
	else											||//Si no hay lista, anade "new".
		*lst = new;									||
}													||
													||
*/