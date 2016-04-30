/*
** fonction.h for fonction in /home/nguye_0/rendu/PSU_2015_minitalk/include
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Mon Feb  1 18:59:26 2016 alexandre2 nguyen
** Last update Sun Feb 21 23:33:37 2016 alexandre
*/

#ifndef FONCTION_H_
# define FONCTION_H_

#include <sys/types.h>
#include <signal.h>
#include <math.h>
#include <stdio.h>
#include <unistd.h>

int	usleep(int usec);
int	kill(pid_t pid, int sig);
void	str_binary(unsigned char *test, int nb);
void	my_putstr(char *str);
void	my_putchar(char c);
int	my_getnbr(char *str);
void	my_put_nbr(int nb);
int	power(int nb, int a);
void	my_handler(int i);

#endif
