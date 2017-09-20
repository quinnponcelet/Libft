# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qponcele <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/18 15:10:37 by qponcele          #+#    #+#              #
#    Updated: 2017/09/18 15:13:48 by qponcele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = memset.c bzero.c memcpy.c memccpy.c memmove.c memchr.c memcmp.c strlen.c strdup.c strcpy.c strncpy.c strcat.c strncat.c strlcat.c strchr.c strrchr.c strstr.c strnstr.c strcmp.c strncmp.c atoi.c isalpha.c isdigit.c isalnum.c isascii.c isprint.c toupper.c tolower.c

OBJS = memset.o bzero.o memcpy.o memccpy.o memmove.o memchr.o memcmp.o strlen.o strdup.o strcpy.o strncpy.o strcat.o strncat.o strlcat.o strchr.o strrchr.o strstr.o strnstr.o strcmp.o strncmp.o atoi.o isalpha.o isdigit.o isalnum.o isascii.o isprint.o toupper.o tolower.o

FLAGS = -Wall -Wextra -Werror -c

NAME = libft.a