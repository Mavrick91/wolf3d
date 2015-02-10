/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpyc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/25 19:48:05 by maducham          #+#    #+#             */
/*   Updated: 2015/01/25 19:48:06 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcpyc(char *dst, const char *src, char c)
{
	char	*msrc;
	char	*mdst;

	mdst = dst;
	msrc = (char*)src;
	if (msrc && mdst)
	{
		while (*msrc != c)
			*mdst++ = *msrc++;
		*mdst = 0;
	}
	return (dst);
}
