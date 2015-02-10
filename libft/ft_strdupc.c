/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/25 19:47:05 by maducham          #+#    #+#             */
/*   Updated: 2015/01/25 19:57:13 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdupc(const char *s1, char c)
{
	char	*dst;

	dst = NULL;
	if (s1)
	{
		dst = ft_strnew(ft_strlenc(s1, c) + 1);
		ft_strcpyc(dst, s1, c);
	}
	return (dst);
}
