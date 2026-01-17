#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t	i;

	i = 0;
    unsigned char *ptr;
    ptr = (unsigned char *)s;
    unsigned char target = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == target)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}