#include "libft.h"
#include <stdlib.h>

static void	*ft_memalloc(size_t size)
{
    void	*ptr;
    size_t	a;

    ptr = (void *)malloc(size);
    if (!ptr)
        return (NULL);
    a = 0;
    while (a < size)
    {
        *(unsigned char *)(ptr + a) = 0;
        a++;
    }
    return (ptr);
}

void	*ft_calloc(size_t count, size_t size)
{
    if (size != 0 && count > ((size_t)-1 / size))
        return (NULL);
    return (ft_memalloc(count * size));
}