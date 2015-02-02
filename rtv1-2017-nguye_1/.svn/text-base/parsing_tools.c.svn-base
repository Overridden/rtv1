/*
** parsing_tools.c for rtv1 in /home/nguye_1//afs_loc/projects/tmp/rt1/tp
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Wed Mar 13 09:19:26 2013 alexandre1 nguyen
** Last update Sun Mar 17 16:12:40 2013 alexandre1 nguyen
*/

#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "list.h"

int	sttff_next(t_param *param, t_pars *pars, int l)
{
  int	k;

  k = 0;
  while (my_charcmp(pars->buf[pars->j], '\t') == 0 ||
	 my_charcmp(pars->buf[pars->j], ' ') == 0)
    pars->j += 1;
  while (my_charcmp(pars->buf[pars->j], '\t') == 1 &&
	 my_charcmp(pars->buf[pars->j], ' ') == 1 &&
	 my_charcmp(pars->buf[pars->j], 0) == 1)
    {
      param->tmp_for_filling[k] = pars->buf[pars->j];
      pars->j += 1;
      k += 1;
    }
  if (param->tmp_for_filling[0] == '0' && param->tmp_for_filling[1] == 'x')
    param->objects[l][pars->m] =
      my_conv_base(param->tmp_for_filling, "0123456789ABCDEF");
  else
    param->objects[l][pars->m] = my_getnbr(param->tmp_for_filling);
  return (pars->j);
}

int	str_to_tab_for_filling(char *buf, t_param *param)
{
  char		*choices;
  int		j, k, m;
  t_pars	*pars;
  static int	l;

  write(1, ".", 1);
  if ((pars = malloc(sizeof(*pars))) == NULL)
    return (EXIT_FAILURE);
  if ((pars->buf = malloc(sizeof(*buf))) == NULL)
    return (EXIT_FAILURE);
  pars->buf = buf;
  pars->j = 0;
  pars->m = 0;
  choices = "0123";
  while (buf[j])
    {
      pars->j = sttff_next(param, pars, l);
      pars->m += 1;
      reset__tmp_for_filling(param);
    }
  l += 1;
}

int	filling(char *file_name, t_param *param)
{
  int	fd;
  char	*buf;

  write(1, ".", 1);
  fd = open(file_name, O_RDWR);
  get_next_line(fd, 1);
  while ((buf = get_next_line(fd, 0)))
    {
      if (buf[0] != '#' && buf[0] != '\n')
	str_to_tab_for_filling(buf, param);
      close(fd);
      fd = open(file_name, O_RDONLY);
    }
  write(1, "\n", 1);
}

int	parsing(char *file_name, t_param *param)
{
  int   i, fd;
  char	*buf;

  write(1, "PARSING:\n\n", 10);
  i = 0;
  if ((fd = open(file_name, O_RDWR)) == -1)
    return (EXIT_FAILURE);
  write(1, "ALLOCATING MEMORY...", 21);
  while ((buf = get_next_line(fd, 0)))
    {
      if (buf[0] != '#' && buf[0] != '\n')
	i += str_to_tab_for_allocating(buf);
      if (close(fd) == -1)
	return (EXIT_FAILURE);
      if ((fd = open(file_name, O_RDONLY)) == -1)
	return (EXIT_FAILURE);
    }
  if (close(fd) == -1)
    return (EXIT_FAILURE);
  parsing_alloc(param, i);
  write(1, "FILLING MEMORY...", 18);
  filling(file_name, param);
  return (EXIT_SUCCESS);
}
