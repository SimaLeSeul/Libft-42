/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibaboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 01:23:25 by mibaboul          #+#    #+#             */
/*   Updated: 2026/10/07 12:47:50 by mibaboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	llen;

	j = 0;
	i = 0;
	llen = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)&haystack[0]);
	while (i < len && haystack[i])
	{
		j = 0;
		while (i + j < len && little[j] && haystack[i + j] == little[j])
			j++;
		if (j == llen)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
