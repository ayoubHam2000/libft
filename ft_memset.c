/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:50:05 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/20 19:07:54 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*ft_memset is used to fill a block of memory with a particular value.
================
ptr : This is a pointer to the block of memory to fill.
c : This is the value to be set.
size : This is the number of bytes to be set to the value.
=================
return : it returns a pointer to the memory area
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}
