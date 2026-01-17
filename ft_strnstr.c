#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
    size_t  n;
	h = 0;
    if (needle[0] == '\0')
        return ((char *)haystack);
    while ((haystack[h] != '\0') && (h < len))
    {
        n = 0;
        while ((needle[n] != '\0') && (haystack [h +n] == needle[n]) && (h + n < len))
        {
            n++;
        }
        if (needle[n] == '\0')
            return ((char *)&haystack[h]);
        h++;
    }
    return (NULL);
}