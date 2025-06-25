#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
    size_t	a;

    if (!s)
        return ;
    a = 0;
    while (s[a])
        a++;
    write(fd, s, a);
    write(fd, "\n", 1);
}