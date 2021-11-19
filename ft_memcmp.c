/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:11:46 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/17 18:29:12 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
* The memcmp() function compares byte string s1 against byte string s2.
	Both strings are assumed to be n bytes long.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0 && *((char *)s1) == *((char *)s2))
	{
		s1++;
		s2++;
		n--;
	}
	return (*((char *)s1) - *((char *)s2));
}
