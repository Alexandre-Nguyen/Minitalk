##
## Makefile for makefile in /home/alexandre/rendu/PSU_2015_minitalk
##
## Made by alexandre
## Login   <nguye_0@epitech.net>
##
## Started on  Sun Feb 21 13:37:26 2016 alexandre
## Last update Sun Feb 21 20:25:41 2016 alexandre
##

CC	= gcc

RM	= rm -f

CFLAGS  += -Wextra -Wall -Werror
CFLAGS  += -ansi -pedantic
CFLAGS  += -I./include

LDFLAGS =

NAME	= ./client/client

NAME2	= ./server/server

SRCS	= client/clients.c \
          client/clients2.c

SRCS2	= server/serveur.c \
	  server/serveur2.c

OBJS	= $(SRCS:.c=.o)

OBJS2	= $(SRCS2:.c=.o)

$(NAME): $(OBJS) $(OBJS2)
	 $(CC) $(OBJS) -o $(NAME)
	 $(CC) $(OBJS2) -o $(NAME2)

all: 	 $(NAME)

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJS2)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAME2)

re: fclean all
