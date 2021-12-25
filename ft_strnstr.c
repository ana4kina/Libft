/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:18:45 by lcombo            #+#    #+#             */
/*   Updated: 2021/10/26 18:41:15 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n;
	char	*hay;
	char	*need;

	i = 0;
	hay = (char *)haystack;
	need = (char *)needle;
	n = ft_strlen(need);
	if (n == 0 || hay == need)
		return (hay);
	while (hay[i] && i < len)
	{
		c = 0;
		while (hay[i + c] && need[c]
			&& hay[i + c] == need[c] && i + c < len)
			c++;
		if (c == n)
			return (hay + i);
		i++;
	}
	return (0);
}
