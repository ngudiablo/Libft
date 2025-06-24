#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t	a;
    char	*new;

    if (!s || !f)
        return (NULL);
    new = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!new)
        return (NULL);
    a = 0;
    while (s[a])
    {
        new[a] = f(a, s[a]);
        a++;
    }
    new[a] = '\0';
    return (new);
}