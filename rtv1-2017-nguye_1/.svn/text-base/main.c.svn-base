/*
** main.c for rt1 in /home/nguye_1//afs_loc/projects/tmp/rt1/tp
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Mon Feb 11 09:55:31 2013 alexandre1 nguyen
** Last update Sun Mar 17 16:13:14 2013 alexandre1 nguyen
*/

#include <stdlib.h>
#include <mlx.h>
#include "list.h"

int	main(int ac, char **av)
{
  t_param	*p;
  char		*file_name;

  if (ac < 2)
    return (EXIT_FAILURE);
  if ((p = malloc(sizeof(*p))) == NULL)
    return (EXIT_FAILURE);
  if (my_strcmp((file_name = av[1]), "STD_F1") == 1 &&
      my_strcmp((file_name = av[1]), "STD_F2") == 1 &&
      my_strcmp((file_name = av[1]), "DICK") == 1)
    return (EXIT_FAILURE);
  parsing(file_name, p);
  p->width = 1188;
  p->height = 800;
  p->mlx = mlx_init();
  p->win = mlx_new_window(p->mlx, p->width, p->height, "tp rt1");
  p->img = mlx_new_image(p->mlx, p->width, p->height);
  setting(p);
  my_printf("%s%s", p->term.vi, p->term.cl);
  fill_img(p);
  mlx_expose_hook(p->win, display_img, p);
  mlx_key_hook(p->win, &gere_key, p);
  mlx_loop(p->mlx);
  safety_exit(p);
  return (EXIT_SUCCESS);
}
