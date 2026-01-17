#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *tmpdst;
    unsigned char *tmpsrc;
    size_t i = 0;

    if (src == NULL && dst == NULL)
        return (dst);
    tmpdst = (unsigned char *)dst;
    tmpsrc = (unsigned char *)src;
    if (tmpdst < tmpsrc)
        while(i < len)
        {
            tmpdst[i] = tmpsrc[i];
            i++;
        }
    if (tmpdst > tmpsrc)
        while (len > 0)
        {
            len--;
            tmpdst[len] = tmpsrc[len];
        }
    return (dst);
}