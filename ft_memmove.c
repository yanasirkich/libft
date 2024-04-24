/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysirkich <ysirkich@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:49:33 by ysirkich          #+#    #+#             */
/*   Updated: 2024/04/22 14:49:14 by ysirkich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	size_t			count;

	pdest = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	count = 0;
	if (!pdest && !psrc)
		return (NULL);
	if (pdest > psrc)
	{
		while (len >= count)
		{
			*pdest++ = *psrc++;
			count++;
		}
	}
	else
	{
		while (len > 0)
		{
			*pdest++ = *psrc++;
			len--;
		}
	}
	return (dst);
}
