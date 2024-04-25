/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysirkich <ysirkich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:53:48 by ysirkich          #+#    #+#             */
/*   Updated: 2024/04/24 19:49:23 by ysirkich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;

	dlen = 0;
	slen = 0;
	while (dst[dlen] != '\0' && dlen < size)
		dlen++;
	while (src[slen] != '\0' && (dlen + slen + 1) < size)
	{
		dst[dlen + slen] = src[slen];
		slen++;
	}
	if (dlen != size)
		dst[dlen + slen] = '\0';
	return (dlen + slen);
}
