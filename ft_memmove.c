/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysirkich <ysirkich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:24:14 by ysirkich          #+#    #+#             */
/*   Updated: 2024/04/27 18:29:38 by ysirkich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	size_t			count;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;

	if (!dst || !src)
		return (NULL);
	if (psrc < pdst && pdst < psrc + len)
	{
		count = len - 2;
		while (len > 0)
		{
			pdst[count] = psrc[count];
			count--;
		}
	}
	else
	{
		count = 0;
		while (count < len)
		{
			pdst[count] = psrc[count];
			count++;
		}
	}
	return (dst);
}
