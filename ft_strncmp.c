#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
    unsigned int	a;

    if (!n)
        return (0);
    a = 0;
    while (a < n && s1[a] && s2[a] && s1[a] == s2[a])
        a++;
    if (a < n)
        return ((unsigned char)s1[a] - (unsigned char)s2[a]);
    else
        return (0);
}