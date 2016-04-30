/*
** serveur2.c for serveur in /home/nguye_0/rendu/PSU_2015_minitalk/src/server
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Tue Feb 16 19:43:19 2016 alexandre2 nguyen
** Last update Sun Feb 21 20:19:47 2016 alexandre
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
