/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysirkich <ysirkich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:20:28 by ysirkich          #+#    #+#             */
/*   Updated: 2024/05/09 15:28:22 by ysirkich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t	i; 

	i = 0;
	dest = (unsigned char *)s;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
}