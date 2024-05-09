/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysirkich <ysirkich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:45:35 by ysirkich          #+#    #+#             */
/*   Updated: 2024/05/09 18:30:40 by ysirkich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	long int	result;
	long int	check;

	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\n'
		|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && ('0' <= *str && *str <= '9'))
	{
		check = result;
		result = result *10 + *str - '0';
		if (result / 10 != check && sign < 0)
			return (0);
		if (result / 10 != check && sign > 0)
			return (-1);
		str++;
	}
	return (result * sign);
}

