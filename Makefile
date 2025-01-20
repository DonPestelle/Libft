# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pestell2 <pestell2@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 20:44:16 by pestell2          #+#    #+#              #
#    Updated: 2025/01/20 19:14:58 by pestell2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =    libft.a
AR        =    ar
ARFLAGS    =    -rcs
CC        =    cc
CFLAGS    =    -Wall -Wextra -Werror

OBJDIR    = build
SRCS    = ft_atoi.c     ft_isalpha.c  ft_memchr.c   ft_memset.c   ft_strlcpy.c  ft_strrchr.c  \
		  ft_bzero.c    ft_isascii.c  ft_memcmp.c   ft_strchr.c   ft_strlen.c   ft_tolower.c  \
		  ft_calloc.c   ft_isdigit.c  ft_memcpy.c   ft_strdup.c   ft_strncmp.c  ft_toupper.c  \
		  ft_isalnum.c  ft_isprint.c  ft_memmove.c  ft_strlcat.c  ft_strnstr.c	ft_substr.c   \
		  ft_strjoin.c	ft_strmapi.c  ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c	\
		  ft_putendl_fd.c	ft_putnbr_fd.c	ft_itoa.c	ft_split.c ft_strtrim.c	ft_lstadd_back.c \
		  ft_lstclear.c   ft_lstiter.c  ft_lstmap.c  ft_lstsize.c ft_lstadd_front.c ft_lstdelone.c \
		  ft_lstlast.c  ft_lstnew.c


OBJS    = $(addprefix $(OBJDIR)/, ${SRCS:.c=.o})

PURPLE = \033[0;35m
BLUE   = \033[0;34m
RESET  = \033[m

all: $(NAME)

$(OBJS): $(OBJDIR)/%.o : %.c libft.h | $(OBJDIR)
	@printf "%-42b%b" "$(PURPLE)$(<):" "$(BLUE)$(@F)$(RESET)\n"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir $(OBJDIR)

$(NAME): $(OBJS)
	@printf "%-42b%b" "$(PURPLE)$(*F):" "$(BLUE)$(@)$(RESET)\n"
	@$(AR) $(ARFLAGS) $@ $^

fclean: clean
	@printf "%b" "$(BLUE)$(@)ing...$(RESET)\n"
	@rm -rf $(NAME)

clean:
	@printf "%b" "$(BLUE)$(@)ing...$(RESET)\n"
	@rm -rf $(OBJDIR)

re:    fclean all

.PHONY: all clean fclean re

