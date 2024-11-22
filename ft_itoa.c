/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:03:55 by hounajar          #+#    #+#             */
/*   Updated: 2024/11/22 02:05:56 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	intlen(int nb)
{
	int	len;

	len = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	char	sign;

	sign = 'p';
	if (n < 0)
	{
		n *= -1;
		sign = 'n';
	}
	len = intlen(n);
	if (sign == 'n')
		len = len + 1;
	str = malloc(len + 1);
	str[0] = '-';
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n > 0 && len-- >= 0)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
