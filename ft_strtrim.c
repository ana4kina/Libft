/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:42:18 by lcombo            #+#    #+#             */
/*   Updated: 2021/10/26 14:43:43 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	is_in_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	str = NULL;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen((char *)s1);
	while (is_in_set(s1[start], set) == 0)
		start++;
	if (start == ft_strlen((char *)s1))
	{
		if (!(str == ft_strdup("")))
			return (NULL);
		else
			return (str);
	}
	while (is_in_set(s1[end - 1], set) == 0)
		end--;
	str = ft_substr(s1, start, end - start);
	return (str);
}
