#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int	a;

    if (!s)
        return (NULL);
    a = ft_strlen(s);
    while (a >= 0)
    {
        if (s[a] == (char) c)
            return ((char *) s + a);
        a--;
    }
    return (NULL);
}