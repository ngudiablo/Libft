#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t	a;

    a = 0;
    while (a < n)
    {
        if (*(unsigned char *)(s + a) == (unsigned char)c)
            return ((void *)s + a);
        a++;
    }
    return (NULL);
}

