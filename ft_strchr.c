#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    size_t	a;

    a = 0;
    while (s[a])
    {
        if (s[a] == (char) c)
            break ;
        a++;
    }
    if (s[a] == (char) c)
        return ((char *) s + a);
    return (NULL);
}