/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngualtie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:48:19 by ngualtie          #+#    #+#             */
/*   Updated: 2025/06/17 14:48:22 by ngualtie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t	a;

    a = 0;
    while (a < n)
    {
        if (*(unsigned char *)(s + a) == (unsigned char)c)
            return ((void *)s + a);
        a++;
    }
    return (NULL);
}

