#include "libft.h"
char	test_f(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    size_t i;
    size_t len;
    char *dest;
    i = 0;
    if (!s || !f)
        return (NULL);
    len = ft_strlen(s);
    dest = malloc(len + 1);
    if (!dest)
        return (NULL);
    while (s[i])
    {
        dest[i] = f(i, s[i]);
        i++;
    }
    dest[len] = '\0';
    return (dest);
}
int main(void)
{
    char *res = ft_strmapi("bonjour", test_f);
    printf("%s", res);
}