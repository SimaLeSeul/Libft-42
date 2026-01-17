#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    char    *dest;
    size_t  len1;
    size_t  len2;
    if (!s1 || !s2)
        return (NULL);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    dest = malloc(len1 + len2 + 1);
    if (!dest)
        return (NULL);
    ft_memcpy(dest, s1, len1);
    ft_memcpy(dest + len1, s2, len2);
    dest[len1 + len2] = '\0';
    return (dest);
}
