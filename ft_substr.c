/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yana <yana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:31:21 by ysirkich          #+#    #+#             */
/*   Updated: 2024/05/04 17:30:26 by yana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	char	*str;
	size_t	i1;
	size_t	i2;

	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - (size_t)start;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i1 = 0;
	i2 = 0;
	while (s[i1] != '\0')
	{
		if (i1 >= start && i2 < len)
		{
			str[i2] = s[i1];
			i2++;
		}
		i1++;
	}
	str[i2] = '\0';
	return (str);
}
