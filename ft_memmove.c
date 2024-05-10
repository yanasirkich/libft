/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysirkich <ysirkich@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:52:15 by ysirkich          #+#    #+#             */
/*   Updated: 2024/05/10 14:52:33 by ysirkich         ###   ########.fr       */
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
