/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:15:15 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/20 19:06:29 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The atoi() function converts the initial portion of the 
	string pointed to by str to int representation.
* atoi must escape blanks characters (\t,\v,\f,\r,\n)
' '      space 
'\t'     horizontal tab 
'\n'     newline
'\v'     vertical tab 
'\f'     form feed 
'\r'     carriage return   
*/

static int	is_blank(char c)
{
	if (c == ' ' || c == '\f'
		|| c == '\v' || c == '\t' || c == '\n' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	signe;
	int	res;

	while (is_blank(*str))
		str++;
	signe = 1;
	if (*str == '-')
		signe = -1;
	if (*str == '+' || *str == '-')
		str++;
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10;
		res = res + (*str - '0') * signe;
		str++;
	}
	return (res);
}
