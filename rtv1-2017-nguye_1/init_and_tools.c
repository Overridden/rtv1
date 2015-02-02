/*
** init_and_tools.c for rtv1 in /home/nguye_1//afs_loc/projects/igraph/rtv1-2017-nguye_1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Sun Mar 17 14:15:05 2013 alexandre1 nguyen
** Last update Sun Mar 17 16:07:45 2013 alexandre1 nguyen
*/

#include <math.h>
#include "list.h"

int	init_e_p_v(t_param *param)
{
  int	i, j;

  i = 0;
  j = 0;
  while (param->objects[i][0] != 0)
    i += 1;
  param->c.e[0] = param->objects[i][1];
  param->c.e[1] = param->objects[i][2];
  param->c.e[2] = param->objects[i][3];
  while (param->objects[j][0] != 1)
    j += 1;
  param->c.p[0] = param->objects[j][1];
  param->c.p[1] = (param->objects[j][2] - (param->width / 2)) + param->x;
  param->c.p[2] = (param->objects[j][3] + (param->height / 2)) - param->y;
  param->c.v[0] = param->c.p[0] - param->c.e[0];
  param->c.v[1] = param->c.p[1] - param->c.e[1];
  param->c.v[2] = param->c.p[2] - param->c.e[2];
}


double	nearest_distance(t_param *param)
{
  double	k1;
  double	k2;

  k1 = (- param->c.b + sqrt(param->c.d)) / (2 * param->c.a);
  k2 = (- param->c.b - sqrt(param->c.d)) / (2 * param->c.a);
  if (k1 > k2)
    return (k2);
  else
    return (k1);
}
