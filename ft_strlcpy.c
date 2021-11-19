/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:50:08 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/17 10:43:40 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// dstsize include a room for NULL termination
// ft_strlcpy return the source length

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while (*src != 0 && dstsize-- > 1)
	{
		*dst = *src;
		src++;
		dst++;
		i++;
	}
	while (*src++ != 0)
		i++;
	*dst = 0;
	return (i);
}
