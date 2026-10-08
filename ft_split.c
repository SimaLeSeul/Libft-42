/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibaboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 23:02:33 by mibaboul          #+#    #+#             */
/*   Updated: 2026/10/08 02:06:26 by mibaboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char sep)
{
	size_t	w;
	size_t	i;

	w = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == sep)
			i++;
		if (s[i])
		{
			w++;
			while (s[i] && s[i] != sep)
				i++;
		}
	}
	return (w);
}

static void	*free_all(char **res, size_t j)
{
	while (j > 0)
	{
		j--;
		free(res[j]);
	}
	free(res);
	return (NULL);
}

static char	**fill_tab(char **res, const char *s, char sep)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == sep)
			i++;
		if (s[i])
		{
			len = 0;
			while (s[i + len] && s[i + len] != sep)
				len++;
			res[j] = ft_substr(s, i, len);
			if (!res[j])
				return (free_all(res, j));
			j++;
			i += len;
		}
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(const char *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res = fill_tab(res, s, c);
	return (res);
}
