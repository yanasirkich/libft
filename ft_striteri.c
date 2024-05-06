/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yana <yana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:11:25 by ysirkich          #+#    #+#             */
/*   Updated: 2024/05/03 17:34:52 by yana             ###   ########.fr       */
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
	if (str != NULL && f != NULL)
	{
		i = 0;
		while (str[i] != '\0')
		{
			(*f)(i, &str[i]);
			i++;
		}
	}
}
