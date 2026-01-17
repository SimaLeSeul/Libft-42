#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    if (count != 0 && count > SIZE_MAX / size)
        return (NULL);
    unsigned char *tmp;
    tmp = malloc(count * size);
    if (!tmp)
        return(NULL);
    ft_bzero(tmp, count * size);
    return (tmp);
}