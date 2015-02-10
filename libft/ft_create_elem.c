/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 21:55:07 by maducham          #+#    #+#             */
/*   Updated: 2015/01/25 19:28:35 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

t_list		*ft_create_elem(void *data)
{
	t_list		*list;

	list = (t_list*)malloc(sizeof(t_list));
	if (list)
	{
		list->content = data;
		list->next = NULL;
	}
	return (list);
}
