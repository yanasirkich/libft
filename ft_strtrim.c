/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yana <yana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:19:17 by ysirkich          #+#    #+#             */
/*   Updated: 2024/05/04 17:29:52 by yana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(char a, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		before;
	size_t		after;
	int			i;

	before = 0;
	after = ft_strlen(s1);
	while (s1[before] != '\0' && ft_set(s1[before], set))
		before++;
	while (after > before && ft_set(s1[after - 1], set))
		after--;
	str = (char *)malloc((after - before + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (before < after)
	{
		str[i] = s1[before];
		i++;
		before++;
	}
	str[i] = '\0';
	return (str);
}

static int	ft_set(char a, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char const	s1[] = "aaaaaaawhiskeyabaa";
	char const	set[] = "a";
	printf ("nice %s", ft_strtrim(s1, set));
}
*/
