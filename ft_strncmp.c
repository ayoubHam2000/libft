/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:58:25 by marvin            #+#    #+#             */
/*   Updated: 2021/11/17 17:48:05 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
* strncmp compares at most the first n bytes of str1 and str2.
	if Return value < 0 then it indicates str1 is less than str2.
	if Return value > 0 then it indicates str2 is less than str1.
	if Return value = 0 then it indicates str1 is equal to str2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 1 && *s1 == *s2 && *s1 != 0)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
