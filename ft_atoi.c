/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngualtie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:47:00 by ngualtie          #+#    #+#             */
/*   Updated: 2025/06/17 14:47:04 by ngualtie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		nbr;
	int		sign;
	size_t	a;

	nbr = 0;
	sign = 1;
	a = 0;
	while (str[a] == ' ' || ('\t' <= str[a] && str[a] <= '\r'))
		a++;
	if (str[a] == '+')
		a++;
	else if (str[a] == '-')
	{
		sign *= -1;
		a++;
	}
	while ('0' <= str[a] && str[a] <= '9')
	{
		nbr = nbr * 10 + str[a] - '0';
		a++;
	}
	return (nbr * sign);
}
