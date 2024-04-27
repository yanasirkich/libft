/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysirkich <ysirkich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:55:47 by ysirkich          #+#    #+#             */
/*   Updated: 2024/04/27 17:16:03 by ysirkich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t num_elements, size_t size)
{
	size_t	total;
	void	*ptr;
	char	*cptr;
	size_t	i;

	total = num_elements * size;
	ptr = malloc(total);
	//if (ptr == NULL)
		//return (NULL);
	i = 0;
	if (ptr != NULL)
	{
		cptr = ((char *)ptr);
		while (i < total)
		{
			cptr[i] = 0;
			i++;
		}
	}
	return (ptr);
}
