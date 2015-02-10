/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 19:05:30 by maducham          #+#    #+#             */
/*   Updated: 2015/01/26 07:59:20 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"
#include "libft/includes/libft.h"

int			*ft_atoi_line(char *str, int *width)
{
	int		*line;
	char	**tab;
	int		i;

	tab = ft_strsplit(str, ' ');
	*width = 0;
	while (str[*width])
		*width += 1;
	if (!(line = (int *)malloc(sizeof(line) * (*width + 1))))
		return (NULL);
	i = 0;
	while (tab[i])
	{
		line[i] = ft_atoi(tab[i]);
		printf("%d", line[i]);
		i += 1;
	}
	printf("\n");
	return (line);
}

int			**ft_tab(char **str, int **tab, int *lenght, int *width)
{
	int		i;

	while (str[*lenght])
		*lenght += 1;
	i = 0;
	tab = (int **)malloc(sizeof(int*));
	while (str[i])
	{
		tab[i] = (int *)malloc(sizeof(int));
		tab[i] = ft_atoi_line(str[i], width);
		i++;
	}
	return (tab);
}
