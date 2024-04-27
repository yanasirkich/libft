/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysirkich <ysirkich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:49:53 by ysirkich          #+#    #+#             */
/*   Updated: 2024/04/26 19:45:10 by ysirkich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_wordcount(const char *s, char c);
static char	**ft_extract_substring(const char **s, char c, char **str);
static void	ft_free(char **array);

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		nw;

	nw = ft_wordcount(s, c);
	array = (char **)malloc(sizeof(char *) * (nw + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		ft_extract_substring(&s, c, &array[i]);
		if (!array[i])
			ft_free(array);
		i++;
	}
	array[i] = NULL;
	return (array);
}

static char	**ft_extract_substring(const char **s, char c, char **array)
{
	const char	*start;
	size_t		lw;

	lw = 0;
	start = *s;
	while (**s != c && **s)
	{
		lw++;
		(*s)++;
	}
	*array = ft_substr(start, 0, lw);
	if (!*array)
	{
		ft_free (array);
		return (NULL);
	}
	lw = 0;
	return (array);
}

static int	ft_wordcount(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
			count++;
		while (*s != c && *s)
			s++;		
	}
	return (count);
}

static void	ft_free(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str = "1111yana1111whiskey11xxx";
	char **ar;
	int i = 0;
	ar = ft_split(str, '1');
	while (ar[i] != NULL)
	{
		printf ("substr is %s\n", ar[i]);
		i++;
	}
}
*/