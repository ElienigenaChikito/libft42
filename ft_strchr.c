/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:30:38 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/29 17:09:17 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;
	int				i;

	i = 0;
	ch = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == (char)ch)
			return ((char *) &s[i]);
		i++;
	}
	if (ch == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
