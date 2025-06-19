
#include "libft.h"

char	*ft_strdup(const char *s1)
{
    char	*new;
    size_t	a;

    new = malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (!new)
        return (NULL);
    a = 0;
    while (s1[a])
    {
        new[a] = s1[a];
        a++;
    }
    new[a] = '\0';
    return (new);
}