/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibaboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:43:42 by mibaboul          #+#    #+#             */
/*   Updated: 2026/10/07 01:06:06 by mibaboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strdlen(const char *str, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	size_t	dlen;

	i = 0;
	len = ft_strlen(src);
	dlen = ft_strdlen(dst, dstsize);
	if (dstsize > dlen)
	{
		while (dlen + i < dstsize - 1 && i < len)
		{
			dst[dlen + i] = src[i];
			i++;
		}
		dst[dlen + i] = '\0';
		return (dlen + len);
	}
	return (dstsize + len);
}
