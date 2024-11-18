/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:49:51 by hounajar          #+#    #+#             */
/*   Updated: 2024/11/18 21:16:02 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*memrchr(const void *s, int c, size_t n)
{
	unsigned char	*scpy;

	scpy = (unsigned char *)s;
	while (n--)
	{
		if (*(unsigned char *)s == c)
		{
			return (scpy);
		}
		s++;
	}
	return (NULL);
}
