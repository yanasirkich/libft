/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysirkich <ysirkich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:45:35 by ysirkich          #+#    #+#             */
/*   Updated: 2024/04/23 14:36:50 by ysirkich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	s;
	int	a;

	s = 1;
	a = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\n'
		|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		if (a > 214748364 || a == 214748364)
			return (0);
		a = a * 10 + (*str - '0');
		str++;
	}
	return (a * s);
}
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("Our result: %d\n", ft_atoi(" +++++++++++++1234ab567"));
	printf("Atoi result: %d\n", atoi("    -231234566666666666666655"));
}
