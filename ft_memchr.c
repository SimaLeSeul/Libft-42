/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibaboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 23:55:24 by mibaboul          #+#    #+#             */
/*   Updated: 2026/10/07 01:05:51 by mibaboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*buff;

	buff = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (buff[i] == (unsigned char)c)
			return ((void *)&buff[i]);
		i++;
	}
	return (NULL);
}
