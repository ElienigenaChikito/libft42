/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:41:04 by eoteros-          #+#    #+#             */
/*   Updated: 2025/02/04 17:11:21 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copia;
	size_t	i;

	i = 0;
	copia = (char *) malloc(ft_strlen(s1) + 1);
	if (copia == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		copia[i] = s1[i];
		i++;
	}
	copia[i] = '\0';
	return (copia);
}
