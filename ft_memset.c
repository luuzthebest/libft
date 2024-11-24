/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:03:29 by hounajar          #+#    #+#             */
/*   Updated: 2024/11/21 13:00:13 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int n, size_t c)
{
	unsigned char	*s2;

	s2 = (unsigned char *)s;
	while (c--)
	{
		*s2++ = (unsigned char)n;
	}
	return (s);
}
