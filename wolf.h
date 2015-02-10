/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maducham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/09 14:12:00 by maducham          #+#    #+#             */
/*   Updated: 2015/01/26 09:24:23 by maducham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF_H
# define WOLF_H

# include <unistd.h>
# include <mlx.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h> //
# include <math.h>
# include <fcntl.h>
# include <X11/Xlib.h>

# define WIDTH 800
# define LENGHT 800

typedef struct		s_info
{
	double			walls;
	double			taille_p;
	double			position_p_x;
	double			position_p_y;
	double			projection_wide;
	double			projection_heigh;
	double			champ_visuel;
	double			dist_cam_ecr;
	double			centre_projec;
	double			angle_2_rayon;
	double			new_x;
	double			new_y;
	double			x;
	double			xxx;
	double			dist;
	double			hauteur;
	void			*mlx;
	void			*win;
	void			*floor;
	void			*sky;
	void			*wall;
	int				indice;
	int				lenght;
	int				width;
	int				**tab;
	double			angle;
	double			angle_axe;
	void			*fen;
	char			*data;
	char			*data_s;
	char			*data_d;
	int				byte;
	int				size;
	int				endian;
	unsigned long	img_color;
	double			save_dist;
	double			first_dist;
	double			last_dist;
}					t_info;

void		windows();
int			**ft_tab(char **str, int **tab, int *lenght, int *width);
void		pixel_put(t_info *a);
t_info*		put_inf(t_info *a);
void		ft_floor(t_info *a);
void		img_put_pixel(t_info *a, int x, int y, int color);
#endif
