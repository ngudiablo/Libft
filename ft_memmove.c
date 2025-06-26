/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngualtie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:58:19 by ngualtie          #+#    #+#             */
/*   Updated: 2025/06/26 15:58:20 by ngualtie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					a;
	unsigned char			*d;
	const unsigned char		*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (d < s)
	{
		a = 0;
		while (a < len)
		{
			d[a] = s[a];
			a++;
		}
	}
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}
