/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yana <yana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:12:14 by ysirkich          #+#    #+#             */
/*   Updated: 2024/04/29 13:15:23 by yana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s[i])
		return (NULL);
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *) &s[i]);
		i++;
	}
	if (c == '\0')
	    return ((char *) &s[i]);
	return (NULL);
}