/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:36:03 by eoteros-          #+#    #+#             */
/*   Updated: 2025/02/20 13:47:37 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start > ft_strlen(s))
	{
		i = 0;
		while (s[i++] != '\0')
		{
			if (i == start)
			{
				while (len-- > 0)
				{
					sub[j] = s[i];
					i++;
					j++;
				}
			}
		}
	}
	return (sub);
}
