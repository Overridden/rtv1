/*
** allocation_tools.c for rtv1 in /home/nguye_1//afs_loc/projects/igraph/rtv1-2017-nguye_1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Sun Mar 17 15:25:14 2013 alexandre1 nguyen
** Last update Sun Mar 17 16:12:16 2013 alexandre1 nguyen
*/

#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "list.h"

int	str_to_tab_for_allocating(char *buf)
{
  char	*choices;
  int	i;

  write(1, ".", 1);
  i = 0;
  choices = "0123";
  while (buf[0] != choices[i] && i < my_strlen(choices) && i != -3)
    {
      i += 1;
      if (i >= my_strlen(choices))
	i = -3;
    }
  return (1);
}

int	parsing_alloc(t_param *param, int i)
{
  int	j;

  write(1, ".", 1);
  j = 0;
  if ((param->objects = malloc(((i + 1) * 5 * sizeof(double)) + 1)) == NULL)
    return (EXIT_FAILURE);
  while (j != i + 1)
    {
      if ((param->objects[j] = malloc(6 * sizeof(double))) == NULL)
	  return (EXIT_FAILURE);
      j += 1;
    }
  write(1, "\n", 1);
}
