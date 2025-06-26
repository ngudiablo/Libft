/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngualtie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:28:43 by ngualtie          #+#    #+#             */
/*   Updated: 2025/06/26 15:28:46 by ngualtie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	a;
	size_t	b;

	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	a = 0;
	while (s1[a])
	{
		new[a] = s1[a];
		a++;
	}
	b = 0;
	while (s2[b])
	{
		new[a + b] = s2[b];
		b++;
	}
	new[a + b] = '\0';
	return (new);
}
