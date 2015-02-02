/*
** objects.c for rtv1 in /home/nguye_1//afs_loc/projects/igraph/rtv1-2017-nguye_1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Sun Mar 17 13:56:45 2013 alexandre1 nguyen
** Last update Sun Mar 17 16:06:12 2013 alexandre1 nguyen
*/

#include <math.h>
#include "list.h"

double	sphere(t_param *param, int i)
{
  param->c.a = CAR(param->c.v[0]) + CAR(param->c.v[1]) + CAR(param->c.v[2]);
  param->c.b = 2 * param->c.v[0] * (param->c.e[0] - param->objects[i][1]) +
    2 * param->c.v[1] * (param->c.e[1] - param->objects[i][2]) +
    2 * param->c.v[2] * (param->c.e[2] - param->objects[i][3]);
  param->c.c = CAR(param->objects[i][1]) + CAR(param->objects[i][2]) +
    CAR(param->objects[i][3]) + CAR(param->c.e[0]) + CAR(param->c.e[1]) +
    CAR(param->c.e[2]) + (-2) * (param->objects[i][1] * param->c.e[0] +
				 param->objects[i][2] * param->c.e[1] +
				 param->objects[i][3] * param->c.e[2]) -
    CAR(param->objects[i][4]);
  param->c.d = CAR(param->c.b) - 4 * param->c.a * param->c.c;
  if (param->c.d >= 0)
    return (nearest_distance(param));
  else
    return (-1);
}

double	hyperboloide(t_param *param, int i)
{
  param->c.a = CAR(param->c.v[0]) + CAR(param->c.v[1]) -
    CAR(param->c.v[2]) / TANC(param->objects[i][4]);
  param->c.b = 2 * param->c.v[0] * (param->c.e[0] - param->objects[i][1]) +
    2 * param->c.v[1] * (param->c.e[1] - param->objects[i][2]) +
    2 * param->c.v[2] * (param->c.e[2] - param->objects[i][3]);
  param->c.c = CAR(param->objects[i][1]) + CAR(param->objects[i][2]) +
    CAR(param->objects[i][3]) + CAR(param->c.e[0]) + CAR(param->c.e[1]) +
    CAR(param->c.e[2]) + (-2) * (param->objects[i][1] * param->c.e[0] +
				 param->objects[i][2] * param->c.e[1] +
				 param->objects[i][3] * param->c.e[2]) -
    CAR(param->objects[i][4]);
  param->c.d = CAR(param->c.b) - 4 * param->c.a * param->c.c;
  if (param->c.d >= 0)
    return (nearest_distance(param));
  else
    return (-1);
}

double	cone(t_param *param, int i)
{
  param->c.a = CAR(param->c.v[0]) + CAR(param->c.v[1]) -
    CAR(param->c.v[2]) / TANC(param->objects[i][4]);
  param->c.b = 2 * param->c.v[0] * (param->c.e[0] - param->objects[i][1]) +
    2 * param->c.v[1] * (param->c.e[1] - param->objects[i][2]) -
    2 * param->c.v[2] * (param->c.e[2] - param->objects[i][3]) /
    TANC(param->objects[i][4]);
  param->c.c = CAR(param->objects[i][1]) + CAR(param->objects[i][2]) -
    CAR(param->objects[i][3]) / TANC(param->objects[i][4]) +
    CAR(param->c.e[0]) + CAR(param->c.e[1]) -
    CAR(param->c.e[2]) / TANC(param->objects[i][4]) +
    (-2) * (param->objects[i][1] * param->c.e[0] +
	    param->objects[i][2] * param->c.e[1] -
	    param->objects[i][3] * param->c.e[2] /
	    TANC(param->objects[i][4]));
  param->c.d = CAR(param->c.b) - 4 * param->c.a * param->c.c;
  if (param->c.d >= 0)
    return (nearest_distance(param));
  else
    return (-1);
}

double	cylindre(t_param *param, int i)
{
  param->c.a = CAR(param->c.v[0]) + CAR(param->c.v[1]);
  param->c.b = 2 * param->c.v[0] * (param->c.e[0] - param->objects[i][1]) +
    2 * param->c.v[1] * (param->c.e[1] - param->objects[i][2]);
  param->c.c = CAR(param->objects[i][1]) + CAR(param->objects[i][2]) +
    CAR(param->c.e[0]) + CAR(param->c.e[1]) +
    (-2) * (param->objects[i][1] * param->c.e[0] +
	    param->objects[i][2] * param->c.e[1]) -
    CAR(param->objects[i][4]);
  param->c.d = CAR(param->c.b) - 4 * param->c.a * param->c.c;
  if (param->c.d >= 0)
    return (nearest_distance(param));
  else
    return (-1);
}

double	plan(t_param *param, int i)
{
  double	k;

  k = -((param->c.e[2] - param->objects[i][3]) / param->c.v[2]);
  if (k > .00001)
    return (k);
  else
    return (-1); 
}
