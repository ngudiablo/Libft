/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngualtie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:55:29 by ngualtie          #+#    #+#             */
/*   Updated: 2025/06/26 15:55:30 by ngualtie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			a;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	a = 0;
	while (a < len)
	{
		ptr[a] = (unsigned char)c;
		a++;
	}
	return (b);
}
