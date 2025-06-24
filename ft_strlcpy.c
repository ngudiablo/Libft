#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t	a;

    if (!src)
        return (0);
    a = 0;
    if (dstsize > 0)
    {
        while (src[a] && a < dstsize - 1)
        {
            dst[a] = src[a];
            a++;
        }
        dst[a] = '\0';
    }
    return (ft_strlen(src));
}