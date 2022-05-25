# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/31 13:49:43 by ybendavi          #+#    #+#              #
#    Updated: 2021/04/28 21:48:14 by ybendavi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = ./libft
NAME = libftprintf.a
CC = clang
RM = rm -f
FLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c analize_format.c format_flag_handler.c ft_itoa_base.c type_flag_handler.c int_point.c format_flags_assets.c format_flags_assets_p2.c str_format_flag.c set_flags.c p_format_flags.c

OBJS = ${SRCS:.c=.o}

$(NAME): $(OBJS)
		$(MAKE) -C ${LIBFT}
		cp libft/libft.a $(NAME)
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all: 	$(NAME)	

clean:
	$(MAKE) clean -C ${LIBFT}
	${RM} ${OBJS}

fclean: 	
		$(MAKE) fclean -C ${LIBFT}
		$(RM) ${NAME}
		${RM} ${OBJS}


re: fclean all
	$(MAKE) re -C ${LIBFT}

.PHONY: clean all fclean re

