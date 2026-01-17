#include "libft.h"
#include <stdio.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *tmpdst;
    unsigned char *tmpsrc;

    if (src == NULL && dst == NULL)
        return (dst);
    tmpdst = (unsigned char *)dst;
    tmpsrc = (unsigned char *)src;
    while (n > 0)
    {
        *(tmpdst++) = *(tmpsrc++);
        n--;
    }
    return (dst);
}