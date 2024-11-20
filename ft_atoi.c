/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:02:27 by hounajar          #+#    #+#             */
/*   Updated: 2024/11/19 17:42:41 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while (*nptr == ' ' || *nptr == '	')
		nptr++;
	if (*nptr == '-')
	{
		sign *= -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	if (*nptr >= '0' && *nptr <= '9')
	{
		while (*nptr && *nptr >= '0' && *nptr <= '9')
		{
			result = result * 10 + (*nptr - '0');
			nptr++;
		}
		return (result * sign);
	}
	return (0);
}
