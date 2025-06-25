#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t	dst_len;
    size_t	src_len;
    size_t	a;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (dstsize <= dst_len)
        return (dstsize + src_len);
    a = 0;
    while (src[a] && (dst_len + a + 1) < dstsize)
    {
        dst[dst_len + a] = src[a];
        a++;
    }
    if (dst_len + a < dstsize)
        dst[dst_len + a] = '\0';
    return (dst_len + src_len);
}