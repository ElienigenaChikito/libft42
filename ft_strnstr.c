/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:42:03 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/31 18:58:42 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	size_t	i;

	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[j] && j < len)
	{
		if (big[j] == little[0])
		{
			i = 0;
			while (little[i] && (big[j + i] == little[i]) && ((j + i) < len))
				i++;
			if (little[i] == '\0')
				return ((char *)big + j);
		}
		j++;
	}
	return (NULL);
}
