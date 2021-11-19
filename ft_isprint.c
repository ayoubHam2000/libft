/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:49:54 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/16 15:02:56 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The isprint() function checks whether a ...
// character is a printable character or not.

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
