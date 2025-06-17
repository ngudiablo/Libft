#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (!*little)
		return ((char *)big);
	while (big[a] && a < len)
	{
		b = 0;
		while (little[b] && big[a + b] == little[b] && (a + b) < len)
			b++;
		if (!little[b])
			return ((char *)&big[a]);
		a++;
	}
	return (0);
}