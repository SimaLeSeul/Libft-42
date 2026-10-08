/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibaboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 00:23:08 by mibaboul          #+#    #+#             */
/*   Updated: 2026/10/06 00:23:09 by mibaboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*tmpdst;
	const unsigned char	*tmpsrc;

	if (!dst && !src)
		return (dst);
	i = 0;
	tmpsrc = (const unsigned char *)src;
	tmpdst = (unsigned char *)dst;
	if (tmpdst > tmpsrc)
	{
		while (len--)
		{
			tmpdst[len] = tmpsrc[len];
		}
	}
	else if (tmpdst <= tmpsrc)
	{
		while (i < len)
		{
			tmpdst[i] = tmpsrc[i];
			i++;
		}
	}
	return (dst);
}
