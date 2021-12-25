/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:16:29 by lcombo            #+#    #+#             */
/*   Updated: 2021/10/23 19:18:08 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *buffer, int c, size_t count)
{
	size_t		i;
	char		*buf;

	i = 0;
	buf = (char *)buffer;
	while (i != count)
	{
		if (buf[i] == (char)c)
			return ((void *)(buf + i));
		i++;
	}
	return (0);
}
