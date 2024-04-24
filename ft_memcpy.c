/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysirkich <ysirkich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:50:00 by ysirkich          #+#    #+#             */
/*   Updated: 2024/04/23 14:28:15 by ysirkich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*s;

	dest = (unsigned char *) dst;
	s = (const unsigned char *) src;
	while (n > 0)
	{
		*dest = *s;
		dest++;
		s++;
		n--;
	}
	return (dst);
}
