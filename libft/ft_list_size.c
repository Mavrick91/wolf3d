/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 17:05:02 by maducham          #+#    #+#             */
/*   Updated: 2015/01/25 19:30:35 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		nb_elem;

	list = begin_list;
	nb_elem = 0;
	while (list)
	{
		nb_elem++;
		list = list->next;
	}
	return (nb_elem);
}
