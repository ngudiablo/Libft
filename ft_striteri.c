#include "libft.h"

void	to_upper_even(unsigned int a, char *c)
{
    if (a % 2 == 0 && *c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int	a;

    a = 0;
    if (!s || !f)
        return ;
    while (s[a])
    {
        f(a, &s[a]);
        a++;
    }
}