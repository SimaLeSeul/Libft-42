#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t len;
    len = 0;
    while (src[len] != '\0')
        len++;
    if (dstsize == 0)
        return (len);
    while (*src != '\0' && dstsize > 1)
    {
        *(dst++) = *(src++);
        dstsize--;
    }
    *dst = '\0';
    return (len);
}