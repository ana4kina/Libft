/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcombo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:08:13 by lcombo            #+#    #+#             */
/*   Updated: 2021/10/12 18:07:49 by lcombo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalnum(int c)
{
	if (((char)c > 64 && (char)c < 91) || ((char)c > 96 && (char)c < 123)
		|| ((char)c > 47 && (char)c < 58))
		return (c);
	return (0);
}
