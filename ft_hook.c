/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hook.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/09 16:34:19 by maducham          #+#    #+#             */
/*   Updated: 2015/01/26 08:41:43 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

int		ft_expose_hook(t_info *a)
{
	pixel_put(a);
	mlx_put_image_to_window(a->mlx, a->win, a->floor, 0, 0);
	return  (0);
}

int		ft_key_hook(int keycode, t_info *a)
{
	a = a;
	if (keycode == 65307)
		exit (0);
	if (keycode == 'q')
	{
		a->angle_axe += 2.5;
		pixel_put(a);
	}
	if (keycode == 'd')
	{
		a->angle_axe -= 2.5;
		pixel_put(a);
	}
	if (keycode == 'z')
	{
		if (!(a->save_dist < 0.4) && (!(a->last_dist < 0.4)) &&
			(!(a->first_dist < 0.4)))
		{
			a->position_p_x -= cos(a->angle_axe / 180 * M_PI) / 6;
			a->position_p_y -= sin(a->angle_axe / 180 * M_PI) / 6;
			pixel_put(a);
		}
	}
	if (keycode == 's')
	{
			a->position_p_x += cos(a->angle_axe / 180 * M_PI) / 6;
			a->position_p_y += sin(a->angle_axe / 180 * M_PI) / 6;
			pixel_put(a);
	}
	return (0);
}

void		windows(int lenght, int width, int **tab)
{
	t_info	*a;

	a = NULL;
	a = put_inf(a);
	a->lenght = lenght;
	a->width = width;
	a->tab = tab;
	a->mlx = mlx_init();
	a->floor = mlx_new_image(a->mlx, 800, 400);
	a->sky = mlx_new_image(a->mlx, 800, 400);
	a->wall = mlx_new_image(a->mlx, 800, 800);
	a->win = mlx_new_window(a->mlx, WIDTH, LENGHT, "wolf3d");
	mlx_expose_hook(a->win, &ft_expose_hook, a);
	mlx_hook(a->win, KeyPress, KeyRelease, &ft_key_hook, a);
	mlx_loop(a->mlx);
}
