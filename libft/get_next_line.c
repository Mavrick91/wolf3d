/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 04:05:59 by maducham          #+#    #+#             */
/*   Updated: 2015/01/26 03:15:09 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/get_next_line.h"
#include "includes/libft.h"
#include <fcntl.h>
#include <stdio.h>

static void			ft_return(char **line, char **save)
{
	size_t			len;
	char			*tmp;

	len = ft_strchr(*save, '\n') - *save;
	tmp = *save;
	*line = ft_strsub(tmp, 0, len);
	*save = ft_strdup(tmp + len + 1);
	if ((*save) == NULL)
		ft_strdel(save);
	free(tmp);
}

static int			ft_eof(char **line, char **save)
{
	*line = ft_strdup(*save);
	ft_strdel(save);
	return (0);
}

static int			ft_errorre(char **save)
{
	if (*save)
		ft_strdel(save);
	return (-1);
}

int					get_next_line(int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	int				ret;
	static char		*save = NULL;
	char			*tmp;

	ret = 0;
	if (fd == -1 || BUFF_SIZE <= 0)
		return (ft_errorre(&save));
	if (save == NULL)
		save = ft_strnew(BUFF_SIZE + 1);
	while (save != NULL
			&& ft_strchr(save, '\n') == NULL
			&& ((ret = read(fd, buff, BUFF_SIZE)) > 0))
	{
		buff[ret] = '\0';
		tmp = save;
		save = ft_strjoin(tmp, buff);
		free(tmp);
	}
	if (ret == -1)
		return (-1);
	if (ret < BUFF_SIZE && ft_strchr(save, '\n') == NULL)
		return (ft_eof(line, &save));
	ft_return(line, &(save));
	return (1);
}
