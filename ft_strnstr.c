/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysirkich <ysirkich@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:57:33 by ysirkich          #+#    #+#             */
/*   Updated: 2024/04/22 13:20:48 by ysirkich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i1;
	size_t	i2;

	i1 = 0;
	i2 = 0;
	if (haystack[i1] == '\0' || needle[i2] == '\0')
		return (NULL);
	if (needle[i2] == '\0')
		return ((char *)haystack);
	while (haystack[i1] != '\0' && i1 < len)
	{
		if (haystack[i1] == needle[0])
		{
			i2 = 0;
			while (haystack[i1 + i2] == needle[i2] && i1 + i2 < len)
			{
				if (needle[i2 + 1] == '\0')
					return ((char *)&haystack[i1]);
				i2++;
			}
		}
		i1++;
	}
	return (NULL);
}
