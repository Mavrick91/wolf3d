/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 17:50:50 by maducham          #+#    #+#             */
/*   Updated: 2015/01/25 19:31:15 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list;
	char	*tmp;

	tmp = NULL;
	list = *begin_list;
	while (list->next)
	{
		if (cmp(list->content, (list->next)->content) > 0)
		{
			tmp = list->content;
			list->content = (list->next)->content;
			list->next->content = tmp;
			list = *begin_list;
		}
		list = list->next;
	}
}
