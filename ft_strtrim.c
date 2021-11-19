/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:08:30 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/18 13:13:53 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
* Allocates (with malloc(3)) and returns a copy of
	’s1’ with the characters specified in ’set’ removed
	from the beginning and the end of the string.
* The trimmed string. NULL if the allocation fails.
*/

int	is_in_set(char const *set, char c)
{
	while (*set != c && *set != 0)
		set++;
	if (*set == 0)
		return (0);
	return (1);
}

/*
* s : for count characters in the set from the begining of s1
* e : for count characters in the set from the end of s1
* line > 48 : (s1 = s1 + e - s;)
	go to the end of s1;
	if s1 is an empty string 
	you shoudn't return back (s1--)
* s1 - e + 1 + s : got to the beginig of s1 + s;
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	int		s;
	int		e;
	char	*trimed;

	s = 0;
	e = ft_strlen(s1);
	while (is_in_set(set, *s1))
	{
		s1++;
		s++;
	}
	s1 = s1 + e - s;
	if (e != 0)
		s1--;
	while (is_in_set(set, *s1))
	{
		s1--;
		e--;
	}
	trimed = malloc(e - s + 1);
	if (!trimed)
		return (NULL);
	s1 = s1 - e + 1 + s;
	ft_strlcpy(trimed, s1, e - s + 1);
	return (trimed);
}
