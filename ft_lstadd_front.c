/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:06:18 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/24 14:12:08 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*new_node;

	new_node = ft_lstnew(content);
	if (!new_node)
		return ;
	new_node->next = *head;
	*head = new_node;
}
