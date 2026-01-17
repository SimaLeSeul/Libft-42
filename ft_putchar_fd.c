#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/*int main(int argc, char const *argv[])
{
    int fd = open(test.txt, O_WRONLY,)
    return 0;
}*/
