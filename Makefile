# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pestell2 <pestell2@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 20:44:16 by pestell2          #+#    #+#              #
#    Updated: 2025/01/08 16:28:16 by pestell2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =    libft.a
AR        =    ar
ARFLAGS    =    -rcs
CC        =    cc
CFLAGS    =    -Wall -Wextra -Werror

OBJDIR    = build
SRCS    = ft_bzero.c   ft_isalpha.c ft_isdigit.c ft_memset.c ft_strncmp.c  \
          ft_strlen.c  ft_tolower.c ft_isalnum.c ft_isascii.c ft_isprint.c \
          ft_strchr.c  ft_strlcpy.c ft_strrchr.c ft_toupper.c
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
