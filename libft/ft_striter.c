/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <maducham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:43:59 by maducham          #+#    #+#             */
/*   Updated: 2015/01/25 19:36:10 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char*))
{
	int		i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(s + i);
		i++;
	}
}
