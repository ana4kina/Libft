/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:44:06 by lcombo            #+#    #+#             */
/*   Updated: 2021/10/26 15:43:53 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	char			*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	substr = malloc(sizeof(char));
	if (s_len < start)
	{
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
