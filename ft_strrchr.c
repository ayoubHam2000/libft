/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:50:16 by marvin            #+#    #+#             */
/*   Updated: 2021/11/17 16:50:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
* The strrchr() function returns a pointer to the last occurrence
	of the character c in the string s.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	while (*s != 0)
	{
		if (*s == c)
			p = (char *)s;
		s++;
	}
	return (p);
}
