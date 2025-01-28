# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pestell2 <pestell2@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 20:44:16 by pestell2          #+#    #+#              #
#    Updated: 2025/01/27 16:02:19 by pestell2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =    libft.a
AR       =    ar
ARFLAGS    =    -rcs
CC        =    cc
CFLAGS    =    -Wall -Wextra -Werror

OBJDIR    = build

SRCS = ft_atoi.c     ft_itoa.c   		 ft_putendl_fd.c  ft_strlcat.c \
	   ft_bzero.c    ft_putnbr_fd.c      ft_strlcpy.c     ft_tolower.c \
	   ft_calloc.c   ft_memchr.c         ft_putstr_fd.c   ft_strlen.c \
	   ft_toupper.c  ft_isalnum.c        ft_memcmp.c      ft_split.c \
	   ft_strmapi.c  ft_isalpha.c        ft_memcpy.c      ft_strchr.c \
	   ft_isascii.c  ft_memmove.c        ft_strdup.c      ft_strnstr.c \
	   ft_isdigit.c  ft_memset.c         ft_striteri.c    ft_strrchr.c \
	   ft_isprint.c  ft_putchar_fd.c     ft_strjoin.c     ft_strtrim.c \
	   ft_strncmp.c	 ft_substr.c


B_SRCS	= ft_lstadd_back_bonus.c   ft_lstclear_bonus.c   ft_lstiter_bonus.c  ft_lstmap_bonus.c \
		  ft_lstsize_bonus.c  ft_lstadd_front_bonus.c  ft_lstdelone_bonus.c  ft_lstlast_bonus.c  ft_lstnew_bonus.c

OBJS    = $(addprefix $(OBJDIR)/, ${SRCS:.c=.o})
B_OBJS    = $(addprefix $(OBJDIR)/, ${B_SRCS:.c=.o})

ifndef BONUS
	OBJECTS = $(OBJS)
else
	OBJECTS = $(B_OBJS)
endif

PURPLE = \033[0;35m
BLUE   = \033[0;34m
RESET  = \033[m

all: $(NAME)

$(OBJDIR)/%.o: %.c libft.h Makefile | $(OBJDIR)
	@printf "%-42b%b" "$(PURPLE)compiling $(<):" "$(BLUE)$(@F)$(RESET)\n"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir $(OBJDIR)

$(NAME): $(OBJECTS)
	@printf "%-42b%b" "$(PURPLE)building:" "$(BLUE)$(@)$(RESET)\n"
	@$(AR) $(ARFLAGS) $@ $(OBJECTS)
	
bonus:
	@make BONUS=42 --no-print-directory

fclean: clean
	@printf "%b" "$(BLUE)$(@)ing...$(RESET)\n"
	@rm -rf $(NAME)

clean:
	@printf "%b" "$(BLUE)$(@)ing...$(RESET)\n"
	@rm -rf $(OBJDIR)

re:    fclean all

.PHONY: all clean fclean re

