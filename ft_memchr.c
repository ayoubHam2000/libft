/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:49:40 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/17 20:56:06 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
* The memchr() function locates the first occurrence of c 
	(converted to an unsigned char) in string s.
* The memchr() function returns a pointer to the byte located, or NULL 
	if no such byte exists within n bytes.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	i;

	i = c;
	while (n > 0 && *((char *)s) != i)
	{
		s++;
		n--;
	}
	if (n == 0 && *((char *)s) != i)
		return (NULL);
	return ((void *)s);
}
