/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/25 19:50:03 by maducham          #+#    #+#             */
/*   Updated: 2015/01/25 19:50:08 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

void	ft_errors(char *fonction, char *msg, int ex)
{
	ft_putstr(fonction);
	ft_putstr(": ");
	ft_putendl(msg);
	if (ex)
		exit(0);
}
