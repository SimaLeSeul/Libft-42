#include "libft.h"

static int is_in_set(char c, const char *set)
{
    size_t i;
    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(const char *s1, const char *set)
{
    size_t start;
    size_t end;
    size_t len;
    char    *dest;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    while (s1[start] && is_in_set(s1[start], set))
        start++;
    end = ft_strlen(s1);
    while (end > start && is_in_set(s1[end - 1], set))
        end--;
    len = end - start;
    dest = malloc(len + 1);
    if (!dest)
        return (NULL);
    ft_memcpy(dest, s1 + start, len);
    dest[len] = '\0';
    return (dest);
}
int main()
{
    printf("%s", ft_strtrim("---Hello World---", "-"));
}