/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngualtie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:48:56 by ngualtie          #+#    #+#             */
/*   Updated: 2025/06/17 14:48:58 by ngualtie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    long	a;

    if (dst < src)
    {
        a = 0;
        while ((size_t)a < len)
        {
            *(unsigned char *)(dst + a) = *(unsigned char *)(src + a);
            a++;
        }
        return (dst);
    }
    else
    {
        a = len - 1;
        while (a >= 0)
        {
            *(unsigned char *)(dst + a) = *(unsigned char *)(src + a);
            a--;
        }
        return (dst);
    }
}
