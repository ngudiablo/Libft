#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
    size_t	a;

    if (!s)
        return ;
    a = 0;
    while (s[a])
        a++;
    write(fd, s, a);
}