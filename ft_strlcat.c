/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:36:31 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/17 11:47:21 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// strlcat appends string src to the end of dst.
// dstsize include a room for NULL termination
// ft_strlcpy return the src_len + dst_len if dstsize > src_len (man)
// else dst_len + dstsize (test)
// It will append at most dstsize - strlen(dst) - 1 characters.

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	src_len;
	int	dst_len;

	src_len = 0;
	dst_len = 0;
	while (*dst != 0)
	{
		dst++;
		dst_len++;
	}
	while (*(src + src_len) != 0)
		src_len++;
	while (*src != 0 && dstsize > src_len + 1)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = 0;
	if (dstsize > src_len)
		return (dst_len + src_len);
	else
		return (dst_len + dstsize);
}
