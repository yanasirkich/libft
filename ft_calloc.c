/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yana <yana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:55:47 by ysirkich          #+#    #+#             */
/*   Updated: 2024/05/04 16:49:53 by yana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t size)
{
	size_t	total;
	void	*ptr;

	total = num_elements * size;
	if (num_elements == 0 || size == 0)
		return (NULL);
	ptr =(void *)malloc(total);
	if (!ptr)
		return (NULL);
	ft_memset((unsigned char *)ptr, 0, total);
	return (ptr);
}
