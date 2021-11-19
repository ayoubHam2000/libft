/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:33:02 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/17 19:28:48 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
* The strnstr() function locates the first occurrence of the 
	null-terminated string needle in the string haystack, 
	where not more than len characters are searched.
    Characters that appear after a `\0' character are not searched.
	
* If needle is an empty string, haystack is returned; if needle occurs 
	nowhere in haystack, NULL is returned; otherwise a pointer 
	to the first character of the first occurrence of needle is returned.
*/

int	compare(const char *str, const char *needle)
{
	while (*str == *needle && needle != 0)
	{
		str++;
		needle++;
	}
	if (*str != *needle && *needle != 0)
		return (0);
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == 0)
		return ((char *)haystack);
	while (*haystack != 0 && len > 1)
	{
		if (compare(haystack, needle))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
