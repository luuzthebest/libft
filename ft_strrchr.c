/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:32:13 by hounajar          #+#    #+#             */
/*   Updated: 2024/11/13 10:11:05 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*p;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == c)
		{
			p = (char *)&s[len];
			return (p);
		}
		len--;
	}
	return (NULL);
}
