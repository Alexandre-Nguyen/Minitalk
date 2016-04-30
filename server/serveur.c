/*
** server.c for server in /home/nguye_0/rendu/PSU_2015_minitalk/server
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Mon Feb  1 18:13:24 2016 alexandre2 nguyen
** Last update Sun Feb 21 20:19:25 2016 alexandre
*/

#include "../include/fonction.h"
#include <sys/types.h>
#include <unistd.h>
#include <math.h>
#include <stdio.h>

void	my_put_nbr(int nb)
{
  if (nb / 10 > 0)
    my_put_nbr(nb / 10);
  my_putchar(nb % 10 + 48);
}

int	power(int nb, int a)
{
  int   i;
  int   tmp;

  i = 1;
  tmp = nb;
  if (a == 0)
    return (1);
  while (i != a)
    {
      nb = nb * tmp;
      i = i + 1;
    }
  return (nb);
}

void	my_handler(int i)
{
  static int res = 0;
  static int a = 0;
  int	b;

  b = 0;
  if (a != 8)
    {
      if (i == 10)
	b = 0 * power(2,a);
      else if (i == SIGUSR2)
	b = 1 * power(2, a);
      res = res + b;
      if (a + 1 == 8)
	{
	  a = 0;
	  my_putchar(res);
	  res = 0;
	}
      else
	a = a + 1;
    }
}

void	traitement()
{
  while (1)
    {
      signal(SIGUSR1, my_handler);
      signal(SIGUSR2, my_handler);
    }
}

int	main()
{
  int	pid;

  pid = getpid();
  my_put_nbr(pid);
  my_putchar('\n');
  traitement();
  return (0);
}
