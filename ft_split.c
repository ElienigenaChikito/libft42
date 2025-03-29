/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:13:52 by eoteros-          #+#    #+#             */
/*   Updated: 2025/03/22 12:53:51 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_wordcount(const char *s, char c)
{
	int	count;
	int	in_word;

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

static char	*ft_putword(const char *s, char c)
{
	char	*word;
	int		wordlen;
	int		i;

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

static void	ft_free(char **array, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static int	ft_fill_array(char **array, const char *s, char c)
{
	int	i;

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

char	**ft_split(const char *s, char c)
{
	char	**array;
	int		word_count;

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
//
// Practicamente, la funcion mas dificil de la libft:
// (1)(wordcount) Retorna el conteo de palabras, separando por el separador (count).
// (2)(putword) Esta funcion es la que escribe palabra por palabra ([str]).
// (3)(free) Libera memoria cuando hay error, para proteger el codigo.
// (4)(fill_array) Llena el (**array) utiliza (2) para rellenar cada (*array[str]).
// (5)(split) Crea un segundo array (**array)||(*array[*str (1, 2, ...)]) y utiliza (4) para llenarla.
//
/*

static	int	ft_wordcount(const char *s, char c)					||
{																||
	int	count = 0;												||(1)___wordcount________________________
	int	in_word = 0;											||
																||//Creamos un contador.
	while (*s)													||//Creamos un iterador.
	{															||
		if (*s != c && in_word == 0)							||//Mientras recorremos la Str.
		{														||  //Si no esta dentro de una palabra,
			count++;											||   y la letra no es un separador, cuenta.
			in_word = 1;										||	//Si la letra, es el separador, indica
		}														||	 que estas dentro de palabra.
		else if (*s == c)										||
			in_word = 0;										||//Retorna el conteo
		s++;													||
	}															||(2)___putword___________________________
	return (count);												||
}																||//Creamoos variable donde asignaremos la
// (1)															|| palabra.
																||//Calculamos el tamano de la palabra.
static char	*ft_putword(const char *s, char c)					||//Creamos iterador.
{																||
	char	*word;												||//calculamos el tamano de la palabra.
	int		wordlen = 0;										||
	int		i = 0;												||//Asignamos memoria con el tamano adecuado.
																||//Si no se ha podido asignar memoria, return.
	while (s[wordlen] && s[wordlen] != c)						||
		wordlen++;												||//Mientras iterador sea menor a la longitud.
	word = (char *)malloc(sizeof(char) * (wordlen + 1));		||//Copiamos la palabra en la variable creada.
	if (!word)													||
		return (NULL);											||//Terminamos la palabra en Nulo.
	while (i < wordlen)											||
	{															||//Retornamos la palabra alojada.
		word[i] = s[i];											||
		i++;													||(3)___free_______________________________
	}															||
	word[i] = '\0';												||//Creamos un iterador.
	return (word);												||
}																||//Mientras hayan palabras, 
//  (2)															||
																||//Genera un Free, que va limpiando cada
static void	ft_free(char **array, int words)					|| palabra de dentro de ese array.
{																||
	int	i = 0;													||//Libera el espacio de antes.
																||
	while (i < words)											||
	{															||(4)___fill_array_________________________
		free(array[i]);											||
		i++;													||//Creamos un iterador.
	}															||
	free(array);												||//Mientras exista una palabra que rellenar,
}																||
//  (3)															|| //Si hay separador, continua.
																||
static int	ft_fill_array(char **array, const char *s, char c)	||//Si hay palabra:
{																||//en el primer espacio pon la primera palabra,
	int	i = 0;													|| //Si no se pudo rellenar, libera memoria.
																||//Pasa a la siguiente palabra.
	while (*s)													||
	{															||//Termina la str en nulo '\0'.
		while (*s == c)											||
			s++;												||
		if (*s)													||(5)___split________________________________
		{														||
			array[i] = ft_putword(s, c);						||//Creamos una variable en la que asignaremos
			if (!array[i])										|| memoria, para meter la frase recortada.
			{													||
				ft_free(array, i);								||//Contamos las palabras, para saber cuanto
				return (0);										|| debemos asignar.
			}													||
			i++;												||//Si no hay string, retorna.
			while (*s && *s != c)								||
				s++;											||//Asignas memoria, contando cuantas palabras
		}														|| hay y un nulo extra.
	}															||
	array[i] = NULL;											||//Si no se ha podido asignar, retorna.
	return (1);													||
}																||//Haz la funcion (4), y devuelve array
// (4)															|| //Y si la funcion falla, retorna NULL.
																||
char	**ft_split(const char *s, char c)						||//Devuelve la funcin dividida.
{																||
	char	**array;											||
	int		word_count = ft_wordcount(s, c);					||
																||
	if (!s)														||
		return (NULL);											||
	array = (char **)malloc(sizeof(char *) * (word_count + 1));	||
	if (!array)													||
		return (NULL);											||
	if (!ft_fill_array(array, s, c))							||
		return (NULL);											||
	return (array);												||
}																||
//  (5)															||
																||
*/