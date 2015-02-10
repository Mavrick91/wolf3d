#include "wolf.h"

t_info		*put_inf(t_info *a)
{
	a = (t_info*)malloc(sizeof(t_info));
	a->data = (char*)malloc(sizeof(char));
	a->walls = 22;
	a->position_p_x = 3;
	a->position_p_y = 4;
	a->champ_visuel = 60;
	a->dist_cam_ecr = 277;
	a->centre_projec = 160.100;
	a->angle_2_rayon = 0.08;
	a->angle = 0;
	a->angle_axe = 0;
	return (a);
}
