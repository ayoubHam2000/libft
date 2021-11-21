/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:02:46 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/21 20:59:03 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
* Allocates (with malloc(3)) and returns an array
	of strings obtained by splitting ’s’ using the
	character ’c’ as a delimiter. The array must be
	ended by a NULL pointer.
* return : The array of new strings resulting from the split.
	NULL if the allocation fails.
*/

static int	nb_place(char const *s, char c)
{
	int		count;

	count = 0;
	while (1)
	{
		if (*s != c)
			count++;
		while (*s != c && *s != 0)
			s++;
		if (*s == 0)
			break ;
		while (*s == c && *s != 0)
			s++;
		if (*s == 0)
			break ;
	}
	return (count);
}

static int	part_len(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != c && *s != 0)
	{
		count++;
		s++;
	}
	return (count);
}

static void	free_table(char **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static int	fill_table(char const *s, char c, char **tab)
{
	int	count;
	int	size_tab;

	size_tab = 0;
	while (1)
	{
		while (*s == c && *s != 0)
			s++;
		if (*s == 0)
			break ;
		count = part_len(s, c);
		*tab = malloc(part_len(s, c) + 1);
		if (!(*tab))
		{
			free_table(tab - size_tab, size_tab);
			return (0);
		}
		ft_strlcpy(*tab, s, count + 1);
		s = s + count;
		tab++;
		size_tab++;
	}
	*tab = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**tab;

	if (!s)
		return (NULL);
	count = nb_place(s, c);
	tab = malloc(sizeof(char *) * (count + 1));
	if (!tab || !fill_table(s, c, tab))
		return (NULL);
	return (tab);
}
