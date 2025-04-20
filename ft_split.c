/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:21:19 by hounajar          #+#    #+#             */
/*   Updated: 2025/04/20 15:48:14 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cwords(char *s)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t')
		{
			while (s[i] == ' ' || s[i] == '\t')
				i++;
			c += !(!s[i]);
		}
		i++;
	}
	return (c);
}

char	*all_word(char **s)
{
	char	*res;
	char	*word;
	int		i;

	i = 0;
	while (**s == ' ' || **s == '\t')
		*s += 1;
	word = *s;
	while ((word[i] != ' ' && word[i] != '\t') && word[i])
		i++;
	res = malloc(i + 1);
	i = 0;
	while ((**s != ' ' && **s != '\t') && **s)
	{
		res[i] = **s;
		*s += 1;
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char *s)
{
	char	**arr;
	int		w;
	int		a;

	while (*s == ' ' || *s == '\t')
		s++;
	if (!*s)
		return (NULL);
	w = cwords(s);
	arr = malloc(sizeof(char *) * (w + 1));
	a = 0;
	while (a < w)
	{
		arr[a] = all_word(&s);
		a++;
	}
	arr[a] = NULL;
	return (arr);
}
