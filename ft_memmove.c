/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysirkich <ysirkich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:24:14 by ysirkich          #+#    #+#             */
/*   Updated: 2024/05/03 14:48:21 by ysirkich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (psrc > pdst)
	{
		while (len)
		{
			*pdst++ = *psrc++;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			pdst[len - 1] = psrc[len - 1];
			len--;
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int main (void)
// {
// 	char *dst = ft_strdup("hello there");
// 	const char *src = ft_strdup("");
// 	ft_memmove(dst, "greetings", 6);
// 	printf ("%s", dst);
// }
