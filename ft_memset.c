/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:15:28 by lcombo            #+#    #+#             */
/*   Updated: 2021/10/23 18:57:13 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *)destination;
	while (i != n)
	{
		dest[i] = c;
		i++;
	}
	return (dest);
}
