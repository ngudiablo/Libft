#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t	a;
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *)dst;
    s = (const unsigned char *)src;
    a = 0;
    while (a < n)
    {
        d[a] = s[a];
        a++;
    }
    return (dst);
}