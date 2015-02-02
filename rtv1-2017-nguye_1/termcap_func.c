/*
** termcap_func.c for rtv1 in /home/nguye_1//afs_loc/projects/tmp/rt1/tp
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Wed Mar 13 09:12:41 2013 alexandre1 nguyen
** Last update Sun Mar 17 16:11:42 2013 alexandre1 nguyen
*/

#include <term.h>
#include <stdlib.h>
#include "list.h"

int	setting(t_param *param)
{
  struct termios	termios_p;

  tgetent(NULL, "xterm");
  param->term.cm = tgetstr("cm", NULL);
  param->term.cl = tgetstr("cl", NULL);
  param->term.gt = tgoto(param->term.cm, 0, 0);
  param->term.us = tgetstr("us", NULL);
  param->term.me = tgetstr("me", NULL);
  param->term.mr = tgetstr("mr", NULL);
  param->term.vi = tgetstr("vi", NULL);
  param->term.ve = tgetstr("ve", NULL);
  if (tcgetattr(0, &termios_p) < 0)
    return (EXIT_FAILURE);
  termios_p.c_lflag &= ~(ICANON);
  termios_p.c_lflag &= ~(ECHO);
  termios_p.c_cc[VTIME] = 0;
  termios_p.c_cc[VMIN] = 1;
  if (tcsetattr(0, TCSANOW, &termios_p) < 0)
    return (EXIT_FAILURE);
}
