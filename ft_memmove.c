#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    size_t			a;
    unsigned char	*d;
    const unsigned char	*s;

    d = (unsigned char *)dst;
    s = (const unsigned char *)src;
    if (d == s || len == 0)
        return (dst);
    if (d < s)
    {
        a = 0;
        while (a < len)
        {
            d[a] = s[a];
            a++;
        }
    }
    else
    {
        a = len;
        while (a > 0)
        {
            d[a - 1] = s[a - 1];
            a--;
        }
    }
    return (dst);
}