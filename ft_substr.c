#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t s_len;
    char   *dest;
    if (!s)
        return (NULL);

    s_len = ft_strlen(s);
    if (start >= s_len)
    {
        char *nul = malloc(1);
        if (!nul)
            return (NULL);
        nul[0] = '\0';
        return (nul);
    }
    if (len > s_len - start)
        len = s_len - start;
    dest = malloc(len + 1);
    if (!dest)
        return (NULL);
    ft_memcpy(dest, s + start, len);
    dest[len] = '\0';
    return (dest);
}
int main()
{
    char *s = "Bonjour comment ca va?";
    printf("%s" ,ft_substr(s , 5 , 8));
}