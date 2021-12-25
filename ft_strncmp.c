/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:14:41 by lcombo            #+#    #+#             */
/*   Updated: 2021/10/23 19:03:16 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int		z;
	size_t	i;

	i = 0;
	z = 0;
	while (i != n)
	{
		if (str1[i] != str2[i])
		{
			z = str1[i] - str2[i];
			break ;
		}
		i++;
	}
	return (z);
}
