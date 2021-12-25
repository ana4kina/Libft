/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:39:37 by lcombo            #+#    #+#             */
/*   Updated: 2021/10/26 17:56:30 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	len;
	char	*c;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	len = s1_len + s2_len + 1;
	c = malloc(sizeof(char) * len);
	if (!c)
		return (0);
	ft_memmove(c, s1, s1_len);
	ft_memmove(c + s1_len, s2, s2_len);
	c[len - 1] = '\0';
	return (c);
}
