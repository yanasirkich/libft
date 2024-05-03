/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysirkich <ysirkich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:11:25 by ysirkich          #+#    #+#             */
/*   Updated: 2024/05/03 15:04:37 by ysirkich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	char	*str;
	int		i;

	if (!s || !f)
		return ;
	str = (char *)s;
	if (str != '\0' && f != '\0')
	{
		i = 0;
		while (str[i] != '\0')
		{
			(*f)(i, &str[i]);
			i++;
		}
	}
}
