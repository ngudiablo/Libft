/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngualtie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:20:37 by ngualtie          #+#    #+#             */
/*   Updated: 2025/06/26 15:20:39 by ngualtie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	if (!s)
		return (NULL);
	a = ft_strlen(s);
	while (a >= 0)
	{
		if (s[a] == (char) c)
			return ((char *) s + a);
		a--;
	}
	return (NULL);
}
