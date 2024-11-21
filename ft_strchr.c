/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:09:45 by hounajar          #+#    #+#             */
/*   Updated: 2024/11/20 16:55:10 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (c == '\0')
		return ((char *)str);
	while (*str)
	{
		if (*str == c)
		{
			return ((char *)str);
		}
		str++;
	}
	return (NULL);
}
