#include "libft.h"

static void	*ft_memalloc(size_t size)
{
    void	*new;
    size_t	a;

    new = (void *) malloc(size);
    if (!new)
        return (NULL);
    a = 0;
    while (a < size)
    {
        *(unsigned char *)(new + a) = 0;
        a++;
    }
    return (new);
}

void	*ft_calloc(size_t count, size_t size)
{
    if (size != 0 && count > ((size_t) -1 / size))
        return (NULL);
    return (ft_memalloc(count * size));
}