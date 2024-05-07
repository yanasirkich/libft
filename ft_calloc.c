/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yana <yana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:55:47 by ysirkich          #+#    #+#             */
/*   Updated: 2024/05/06 21:52:58 by yana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t size)
{
	void	*ptr;

	if (num_elements != 0 )
	{
		if (num_elements && size && size > UINT_MAX / num_elements)
			return (NULL);
	}
	ptr = malloc(num_elements * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * num_elements);
	return (ptr);
}