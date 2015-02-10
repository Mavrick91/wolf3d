/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/25 19:49:20 by maducham          #+#    #+#             */
/*   Updated: 2015/01/25 19:49:21 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "includes/libft.h"

void	ft_perror(char *name, char *error, int iexit)
{
	if (name)
		ft_putstr(name), ft_putstr(": ");
	perror(error);
	if (iexit)
		exit(iexit);
}
