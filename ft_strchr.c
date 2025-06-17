/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngualtie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:49:13 by ngualtie          #+#    #+#             */
/*   Updated: 2025/06/17 14:49:14 by ngualtie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    size_t	a;

    a = 0;
    while (s[a])
    {
        if (s[a] == (char) c)
            break ;
        a++;
    }
    if (s[a] == (char) c)
        return ((char *) s + a);
    return (NULL);
}
