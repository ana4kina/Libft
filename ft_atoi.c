/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:08:13 by lcombo            #+#    #+#             */
/*   Updated: 2021/10/12 17:55:02 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	number;
	int	min;

	number = 0;
	min = 1;
	while (*str < 33)
		str++;
	if (*str == '-')
	{
		min = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		number = (number * 10) + ((int)*str - '0');
		str++;
	}
	return (number * min);
}
