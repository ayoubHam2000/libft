/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:50:16 by marvin            #+#    #+#             */
/*   Updated: 2021/11/20 19:08:59 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The strrchr() function returns a pointer to the last occurrence
	of the character c in the string s.
* The terminating null character is considered to be part of the 
	string; therefore if c is `\0', the functions locate the 
	terminating `\0'.
* The functions strchr() and strrchr() return a pointer to the
	located character, or NULL if the character does not appear in the string.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	c = c % 256;
	p = NULL;
	while (*s != 0)
	{
		if (*s == c)
			p = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (p);
}
