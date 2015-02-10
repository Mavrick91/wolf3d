/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <maducham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:54:07 by maducham          #+#    #+#             */
/*   Updated: 2015/01/25 19:41:47 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	char	c;
	size_t	len;

	if (str && find)
	{
		len = ft_strlen(find);
		if (len == 0)
			return ((char *)str);
		while ((c = *str) && n >= len)
		{
			if (!ft_strncmp(str, find, len))
				return ((char *)str);
			++str;
			--n;
		}
	}
	return (0);
}
