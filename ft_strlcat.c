#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t dstsize)
{
	size_t	dst_len;
	size_t	index;
	size_t	a;

	dst_len = ft_strlen(d);
	index = 0;
	while (d[index])
		index++;
	a = 0;
	while (s[a] && (a + index + 1) < (dstsize))
	{
		d[index + a] = s[a];
		a++;
	}
	if (a < dstsize)
		d[index + a] = '\0';
	if (dstsize <= dst_len)
		return (ft_strlen(s) + dstsize);
	else
		return (ft_strlen(s) + dst_len);
}