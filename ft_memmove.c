/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:43:31 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/16 21:54:35 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
The memmove() function shall copy the first n bytes pointed ..
to by src to the buffer pointed to by dest. Source and destination may overlap.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = 0;
	if (dst > src)
	{
		while (len-- > 0)
		{
			*((char *)(dst + len)) = *((char *)(src + len));
		}
	}
	else
	{
		while (len-- > 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}