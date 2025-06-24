#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
    size_t	a;
    unsigned char *ptr;

    ptr = (unsigned char *)b;
    a = 0;
    while (a < len)
    {
        ptr[a] = (unsigned char)c;
        a++;
    }
    return (b);
}