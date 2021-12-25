/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:00:31 by lcombo            #+#    #+#             */
/*   Updated: 2021/10/23 19:01:35 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	j = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = dlen;
	if (size == 0)
		return (slen);
	if (size < dlen)
		return (slen + size);
	else
	{
		while (src[j] && (dlen + j) < size)
			dest[i++] = src[j++];
		if ((dlen + j) == size && dlen < size)
			dest[--i] = '\0';
		else
			dest[i] = '\0';
		return (slen + dlen);
	}
}
