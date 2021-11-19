/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:49:50 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/16 15:02:32 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The isdigit() function checks whether a character...
// is numeric character (0-9) or not.

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
