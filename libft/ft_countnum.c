/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/25 19:50:35 by maducham          #+#    #+#             */
/*   Updated: 2015/01/25 19:50:40 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_countnum(int n)
{
	int		c;

	c = 0;
	if (n <= 9)
		c = 1;
	if (n >= 10)
	{
		while (n > 0)
		{
			n = n / 10;
			c++;
		}
	}
	return (c);
}