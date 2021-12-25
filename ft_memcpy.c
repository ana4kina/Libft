/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:27:11 by lcombo            #+#    #+#             */
/*   Updated: 2021/10/23 20:28:05 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	if ((destination == source) || n == 0)
		return (destination);
	if (!destination && !source)
		return (0);
	i = 0;
	s = (const char *)source;
	d = (char *)destination;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
