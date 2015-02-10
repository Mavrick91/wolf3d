/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <maducham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:54:23 by maducham          #+#    #+#             */
/*   Updated: 2015/01/25 19:33:19 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;
	unsigned char	car;
	unsigned int	i;

	tmp = (unsigned char *)b;
	car = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		tmp[i] = car;
		i++;
	}
	return (b);
}
