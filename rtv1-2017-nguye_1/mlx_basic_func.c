/*
** mlx_basic_func.c for rtv1 in /home/nguye_1//afs_loc/projects/tmp/rt1/tp
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Wed Mar 13 09:10:46 2013 alexandre1 nguyen
** Last update Sun Mar 17 16:06:23 2013 alexandre1 nguyen
*/

#include <mlx.h>
#include "list.h"

int	my_pixel_put_to_img(t_param *param, void *img,
			      int x, int y)
{
  int	bpp;
  int	size_line;
  int	endian;
  unsigned int color_dec;
  char	*data;
  int	t;
  int	r;
  int	g;
  int	b;

  color_dec = mlx_get_color_value(param->mlx, param->color);
  r = (color_dec / 256 / 256) % 256;
  g = (color_dec / 256) % 256;
  b = (color_dec) % 256;
  data = mlx_get_data_addr(img, &bpp, &size_line, &endian);
  data[((size_line * y) + (x * bpp / 8)) + 2] = r;
  data[((size_line * y) + (x * bpp / 8)) + 1] = g;
  data[((size_line * y) + (x * bpp / 8))] = b;
  return (0);
}

int	display_img(t_param *param)
{
  mlx_put_image_to_window(param->mlx, param->win, param->img, 0, 0);
  return (0);
}

int	gere_key(int keycode, t_param *param)
{
  if (keycode == 65307)
    safety_exit(param);
}
