/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:13:52 by eoteros-          #+#    #+#             */
/*   Updated: 2025/02/28 14:14:42 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int ft_wordcount(const char *s, char c)
{
    int count;
    int in_word;

    count = 0;
    in_word = 0;
    while (*s)
    {
        if (*s != c && in_word == 0)
        {
            count++;
            in_word = 1;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return (count);
}

static char *ft_putword(const char *s, char c)
{
    char    *word;
    int     wordlen;
    int     i;

    wordlen = 0;
    while (s[wordlen] && s[wordlen] != c)
        wordlen++;
    word = (char *)malloc(sizeof(char) * (wordlen + 1));
    if (!word)
        return (NULL);
    i = 0;
    while (i < wordlen)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

static void ft_free(char **array, int words)
{
    int i;

    i = 0;
    while (i < words)
    {
        free(array[i]);
        i++;
    }
    free(array);
}

static int  ft_fill_array(char **array, const char *s, char c)
{
    int i;

    i = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
        {
            array[i] = ft_putword(s, c);
            if (!array[i])
            {
                ft_free(array, i);
                return (0);
            }
            i++;
            while (*s && *s != c)
                s++;
        }
    }
    array[i] = NULL;
    return (1);
}

char    **ft_split(const char *s, char c)
{
    char    **array;
    int     word_count;

    if (!s)
        return (NULL);
    word_count = ft_wordcount(s, c);
    array = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!array)
        return (NULL);
    if (!ft_fill_array(array, s, c))
        return (NULL);
    return (array);
}
