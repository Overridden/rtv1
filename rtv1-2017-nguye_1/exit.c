/*
** exit.c for rtv1 in /home/nguye_1//afs_loc/projects/tmp/rt1/tp
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Wed Mar 13 11:03:52 2013 alexandre1 nguyen
** Last update Sun Mar 17 16:58:41 2013 alexandre1 nguyen
*/

#include <stdlib.h>
#include "list.h"

void	safety_exit(t_param *param)
{
  int	i, j;

  i = 0;
  my_putstr(param->term.me);
  my_putstr(param->term.ve);
  free(param);
  exit(EXIT_SUCCESS);
}
