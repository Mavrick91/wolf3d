/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <maducham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:38:01 by maducham          #+#    #+#             */
/*   Updated: 2015/01/26 07:07:43 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include "includes/get_next_line.h"

int		ft_atoi(char *n)
{
	int		i;
	int		r;
	int		neg;

	i = 0;
	r = 0;
	neg = 1;
	while (n[i] == ' ' || n[i] == '\t' || n[i] == '\r' || n[i] == '\n' || \
			n[i] == '\f' || n[i] == '\v')
		i++;
	if (n[i] == '-')
	{
		i++;
		neg = -1;
	}
	else if (n[i] == '+')
		i++;
	while (n[i] != '\0' && n[i] >= '0' && n[i] <= '9')
	{
		r = r * 10 + (n[i] - 48);
		i++;
	}
	return (r * neg);
}
