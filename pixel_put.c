#include "wolf.h"

void		img_put_pixele(t_info *a, int x, int y, int color)
{
	char	*couleur;

	color = mlx_get_color_value(a->mlx, color);
	couleur = (char*)&color;
	a->data_d[(x * (a->byte / 8)) + (y * a->size)] = couleur[0];
	a->data_d[(x * (a->byte / 8)) + (y * a->size) + 1] = couleur[1];
	a->data_d[(x * (a->byte / 8)) + (y * a->size) + 2] = couleur[2];
}

void		ft_draw(t_info *a)
{
	double	min_y;
	double	max_y;
	double	g;

	g = 0;
	if (a->hauteur > LENGHT)
		a->hauteur = LENGHT;
	min_y = (LENGHT / 2.0) - (a->hauteur / 2.0);
	max_y = (LENGHT / 2.0) + (a->hauteur / 2.0);
	if ((int)a->angle == (int)((a->champ_visuel / 2) - a->angle_2_rayon))
			a->first_dist = a->dist;
	if ((int)a->angle == (a->angle_axe - (a->champ_visuel / 2 - 30)))
		a->save_dist = a->dist;
	if ((int)a->angle == (a->angle_axe - (a->champ_visuel / 2 - 30)))
		a->save_dist = a->dist;
//	while (g < max_y)
//	{
//		img_put_pixele(a, a->xxx, g, 155155155);
//		g++;
//	}
	while (min_y < max_y)
	{
		img_put_pixele(a, a->xxx, min_y, 255255255);
		min_y++;
	}
//	while (min_y < LENGHT)
//	{
//		img_put_pixele(a, a->xxx, min_y, 101010);
//		min_y++;
//	}
}

int			detect_wall(t_info *a, double x, double y)
{
	if (a->tab[(int)round(y)][(int)round(x)] == 1)
		return (1);
	return (0);
}

void		pixel_put(t_info *a)
{
	a->xxx = 0;
	a->floor = mlx_new_image(a->mlx, 800, 800);
	a->data_d = mlx_get_data_addr(a->floor, &a->byte, &a->size, &a->endian);
	a->angle = a->angle_axe + (a->champ_visuel / 2);
	while (a->angle > a->angle_axe - (a->champ_visuel / 2))
	{
		a->x = a->position_p_x;
		a->new_x = a->position_p_x;
		a->new_y = a->position_p_y;
		while (!(detect_wall(a, a->new_x, a->new_y)))
		{
			a->new_x = a->position_p_x - ((a->x - a->position_p_x) *
				cos((M_PI / 180) * (a->angle)));
			a->new_y = a->position_p_y - ((a->x - a->position_p_x) *
				sin((M_PI / 180) * (a->angle)));
			a->x += 0.01;
		}
		a->angle -= a->angle_2_rayon;
		a->dist = sqrt(pow((a->new_x - a->position_p_x), 2) +
			pow((a->new_y - a->position_p_y), 2));
		a->dist *= cos((M_PI / 180) * (a->angle_axe - a->angle));
		a->hauteur = ((280 * a->walls) / a->dist) / 10;
		ft_draw(a);
		a->xxx += WIDTH / (a->champ_visuel / a->angle_2_rayon);
	}
	a->last_dist = a->dist;
	mlx_put_image_to_window(a->mlx, a->win, a->floor, 0, 0);
}
