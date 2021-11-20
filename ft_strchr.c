/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:15:50 by marvin            #+#    #+#             */
/*   Updated: 2021/11/20 19:08:18 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strchr() function returns a pointer to the first occurrence
	of the character c in the string s.
*/
char	*ft_strchr(const char *s, int c)
{
	c = c % 256;
	while (*s != 0 && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
