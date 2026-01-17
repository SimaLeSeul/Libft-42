#include "libft.h"

char *ft_strdup(const char *s1)
{
        size_t len;
        char *dest;

        len = ft_strlen(s1);
        dest = malloc(len * sizeof(char) + 1);
        if (!dest)
                return (NULL);
        ft_memcpy(dest, s1, len);
        dest[len] = '\0';
        return (dest);
}
 