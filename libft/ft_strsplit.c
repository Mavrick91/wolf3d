/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <maducham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:51:48 by maducham          #+#    #+#             */
/*   Updated: 2015/01/25 23:59:49 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int		ft_nbword(char const *s, char c)
{
	int		i;
	int		res;

	res = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			res++;
		}
		if (s[i] == c)
			i++;
	}
	return (res);
}

static int		ft_lenletter(char const *s, char c, int *z)
{
	int		i;

	i = 0;
	if (s[*z] == c)
	{
		while (s[*z] == c)
			(*z)++;
	}
	while (s[*z] != c && s[*z] != '\0')
	{
		i++;
		(*z)++;
	}
	return (i);
}

static char		**ft_inittmp(char **tmp, char const *s, char c)
{
	int		i;
	int		u;
	int		z;

	i = 0;
	u = 0;
	z = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
			{
				tmp[u][z] = s[i];
				i++;
				z++;
			}
			z = 0;
			u++;
		}
		if (s[i] == c)
			i++;
	}
	tmp[u] = 0;
	return (tmp);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tmp;
	int		i;
	int		u;
	int		z;

	z = 0;
	u = 0;
	if (!s)
		return (NULL);
	i = ft_nbword(s, c);
	tmp = (char **)malloc(sizeof(char*) * (i + 1));
	if (!tmp)
		return (NULL);
	while (i > u)
	{
		tmp[u] = (char *)malloc(sizeof(char) * (ft_lenletter(s, c, &z) + 1));
		u++;
	}
	return (ft_inittmp(tmp, s, c));
}
