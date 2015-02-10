/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/25 19:50:18 by maducham          #+#    #+#             */
/*   Updated: 2015/01/25 19:50:20 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

void	ft_error(char *fonction, char *fichier, int ex)
{
	ft_putstr(fonction);
	ft_putstr(": ");
	perror(fichier);
	if (ex)
		exit(0);
}
