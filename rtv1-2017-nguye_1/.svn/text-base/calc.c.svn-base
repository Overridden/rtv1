/*
** calc.c for rtv1 in /home/nguye_1//afs_loc/projects/igraph/rtv1-2017-nguye_1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Sun Mar 17 14:13:30 2013 alexandre1 nguyen
** Last update Sun Mar 17 16:08:42 2013 alexandre1 nguyen
*/

#include <term.h>
#include "list.h"

void	calc_j1(t_param *param, int i)
{
  double	(*fptr[5])(t_param *, int);
  int	color;

  fptr[0] = &sphere;
  fptr[1] = &cylindre;
  fptr[2] = &cone;
  fptr[3] = &hyperboloide;
  fptr[4] = &plan;
  param->calc.tmp = (*fptr[(int)(param->objects[i][0]) - 2])(param, i);
  if (param->calc.tmp < param->calc.d && param->calc.tmp >= 0)
    {
      param->calc.d = param->calc.tmp;
      if (param->objects[i][0] == 6)
	param->calc.color = param->objects[i][4];
      else
	param->calc.color = param->objects[i][5];
    }
}

void	calc_j0(t_param *param, int i)
{
  double	(*fptr[5])(t_param *, int);
  int	color;

  fptr[0] = &sphere;
  fptr[1] = &cylindre;
  fptr[2] = &cone;
  fptr[3] = &hyperboloide;
  fptr[4] = &plan;
  param->calc.d = (*fptr[(int)(param->objects[i][0]) - 2])(param, i);
  if (param->objects[i][0] == 6)
    param->calc.color = param->objects[i][4];
  else
    param->calc.color = param->objects[i][5];
  param->calc.tmp = param->calc.d;
  if (param->calc.d >= 0)
    param->calc.j = 1;
}

int	calc(t_param *param)
{
  int		i;

  i = 0;
  param->calc.j = 0;
  param->calc.tmp = 0;
  while (param->objects[i])
    {
      if (param->calc.j == 1 && param->objects[i][0] > 1)
	calc_j1(param, i);
      else if (param->calc.j == 0 && param->objects[i][0] > 1)
	calc_j0(param, i);
      i += 1;
    }
  if (param->calc.d >= 0)
    return (param->calc.color);
  else
    return (0x000000);
}

int	fill_img(t_param *param)
{
  param->x = 0;
  my_printf("%s[", param->term.cl);
  while (param->x < param->width)
    {
      param->y = 0;
      while (param->y < param->height)
	{
	  init_e_p_v(param);
	  param->color = calc(param);
	  my_pixel_put_to_img(param, param->img, param->x, param->y);
	  param->y += 1;
	}
      if ((param->x % (param->width / 100 * 2)) == 0)
	{
	  my_printf("%s|", tgoto(param->term.cm,
				 (param->x /(param->width / 100 * 4)) + 1, 0));
	  my_printf("%s%c (%c)\n", tgoto(param->term.cm, 26, 0),
		    93, wheel((param->x * 100) / param->width / 2));
	  my_printf("%d%%\n", (param->x * 100) / param->width + 2);
	}
      param->x += 1;
    }
  display_img(param);
}
