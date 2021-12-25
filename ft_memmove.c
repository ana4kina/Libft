/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:28:34 by lcombo            #+#    #+#             */
/*   Updated: 2021/10/23 20:29:16 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t len)
{
	char	*s;
	char	*d;

	s = (char *)source;
	d = (char *)destination;
	if (destination == source)
		return (destination);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (destination);
	}
	while (len--)
		*d++ = *s++;
	return (destination);
}
