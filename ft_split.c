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

static int ft_wordcount(const char *s, char c)
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
    char*  word;
    size_t  wordlen;
    size_t  i;

    wordlen = 0;
    i = 0;
    while (s[wordlen] != c && s[wordlen] != '\0')
        wordlen++;
    word = (char *)malloc(sizeof(char) * (wordlen + 1));
    if (word == NULL)
        return (NULL);
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

char    **ft_split(const char *s, char c)
{
    size_t  word_count;
    char **array;
    int i;

    if (s == NULL)
        return (NULL);
    word_count = ft_wordcount(s, c);
    array = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (array == NULL)
        return (NULL);
    i = 0;
    while (*s)
    {
        while (*s && *s == c)
            s++;
        if (*s && *s != c)
        {
            array[i] = ft_putword(s, c);
            if (array[i] == NULL)
            {
                ft_free(array, i);
                return (NULL);
            }
            i++;
        }
        while (*s)
            s++;
    }
    array[i] = NULL;
    return (array);
}