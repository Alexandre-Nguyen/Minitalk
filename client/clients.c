/*
** client.c for client in /home/nguye_0/rendu/PSU_2015_minitalk/client
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Mon Feb  1 18:14:06 2016 alexandre2 nguyen
** Last update Sun Feb 21 23:28:35 2016 alexandre
*/

#include "../include/fonction.h"
#include <unistd.h>
#include <stdio.h>
#include <math.h>
#include <sys/types.h>
#include <signal.h>

void	str_binary(unsigned char *test, int nb)
{
  int   i;
  int	b;
  int   bin;

  i = 0;
  b = 0;
  while (test[i] != '\0')
    {
      while (b != 8)
        {
          bin = test[i] % 2;
          test[i] = test[i] / 2;
          if (bin == 0)
	    kill(nb, SIGUSR1);
	  else if (bin == 1)
	    kill(nb, SIGUSR2);
	  b = b + 1;
	  usleep(1000);
        }
      b = 0;
      i = i + 1;
    }
}

int	my_getnbr(char *str)
{
  int   signe;
  int   nb;
  int   i;

  i = 0;
  nb = 0;
  signe = 1;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
        {
          signe = signe * (-1);
        }
      i = i + 1;
    }
  while (str[i] != '\0')
    {
      nb = nb * 10;
      nb = nb + (str[i] - 48);
      i = i + 1;
    }
  nb = nb * signe;
  return (nb);
}

int	traitement(char *argv, unsigned char *str)
{
  int	nb;

  nb = my_getnbr(argv);
  if (nb == 0 || nb < 0)
    return (0);
  str_binary(str, nb);
  return (nb);
}

int	main(int argc, char **argv)
{
  if (argc != 3)
    {
      my_putstr("invalid commande\n");
      return (0);
    }
  traitement(argv[1], (unsigned char *)argv[2]);
  return (0);
}
