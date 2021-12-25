/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:18:25 by lcombo            #+#    #+#             */
/*   Updated: 2021/10/27 17:08:31 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *buffer1, const void *buffer2, size_t count)
{
	const unsigned char	*buf1;
	const unsigned char	*buf2;
	size_t				i;

	buf1 = (const unsigned char *)buffer1;
	buf2 = (const unsigned char *)buffer2;
	i = 0;
	while (i < count)
	{
		if (buf1[i] != buf2[i])
			return (buf1[i] - buf2[i]);
		i++;
	}
	return (0);
}
