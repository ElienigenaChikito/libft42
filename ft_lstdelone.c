/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:06:54 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/24 14:16:27 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*prev;

	temp = *lst;
	prev = NULL;
	if (temp && temp->data == value)
	{
		*lst = temp->next;
		free(temp);
		return ;
	}
	while (temp && temp->data != value)
	{
		prev = temp;
		temp = temp->next;
	}
	if (!temp)
		return ;
	prev->next = temp->next;
	free(temp);
}
