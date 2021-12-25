/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:24:34 by lcombo            #+#    #+#             */
/*   Updated: 2021/10/23 20:23:40 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*c;

	len = ft_strlen(str) + 1;
	c = malloc(sizeof(char) * len);
	if (!c)
		return (0);
	c = ft_memcpy(c, str, len);
	return (c);
}
