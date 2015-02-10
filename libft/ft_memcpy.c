/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <maducham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:53:14 by maducham          #+#    #+#             */
/*   Updated: 2015/01/25 19:32:58 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void				*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*srce;
	unsigned int	i;

	tmp = (unsigned char *)dest;
	srce = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tmp[i] = srce[i];
		i++;
	}
	return (dest);
}
