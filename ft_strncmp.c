/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngualtie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:49:49 by ngualtie          #+#    #+#             */
/*   Updated: 2025/06/17 15:00:30 by ngualtie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	if (!n)
		return (0);
	a = 0;
	while (a < n && s1[a] && s2[a] && s1[a] == s2[a])
		a++;
	if (a < n)
		return (s1[a] - s2[a]);
	else
		return (0);
}
