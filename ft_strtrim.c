/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:29:39 by eoteros-          #+#    #+#             */
/*   Updated: 2025/02/28 13:53:01 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*copia;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	if (*s1 == '\0')
		return (ft_strdup(""));
	if (*set == '\0')
		return (ft_strdup(s1));
	len1 = 0;
	while (s1[len1] && ft_strchr(set, s1[len1]))
		len1++;
	len2 = ft_strlen(s1);
	while (len2 > len1 && ft_strchr(set, s1[len2 - 1]))
		len2--;
	copia = (char *)malloc(sizeof(char) * (len2 - len1 + 1));
	if (copia == NULL)
		return (NULL);
	ft_strlcpy(copia, s1 + len1, len2 - len1 + 1);
	return (copia);
}
