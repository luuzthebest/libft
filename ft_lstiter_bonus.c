/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 08:43:03 by hounajar          #+#    #+#             */
/*   Updated: 2024/11/22 09:18:38 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*nxt;

	nxt = lst;
	if (lst == NULL)
		return ;
	while (nxt != NULL)
	{
		f(nxt->content);
		nxt = nxt->next;
	}
}
