# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zee <zee@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/19 13:45:33 by agabrie           #+#    #+#              #
#    Updated: 2018/09/01 06:50:44 by zee              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a
PART1 =		ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c \
			ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
			ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
			ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			ft_isprint.c ft_toupper.c ft_tolower.c
PART2 =		ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
			ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
			ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c \
			ft_strtrim.c ft_strsplit.c ft_strsplit.c ft_itoa.c \
			ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS =		ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c \
			ft_lstmap.c ft_lstnew.c
EXTRA =		ft_isspace.c ft_isupper.c ft_islower.c ft_intlen.c ft_strrev.c \
			ft_find_word.c ft_wcount.c ft_conchar.c ft_index_of_char.c \
			ft_strndup.c ft_dup_conchar.c get_next_line.c ft_nbrendl_fd.c \
			ft_nbrendl.c calc_distance.c ft_power.c ft_putarr_fd.c \
			ft_root.c ft_putarr.c get_next.c col_str_fd.c set_point.c \
			put_coords_fd.c col_char_fd.c col_endl_fd.c ft_isnum.c freearray.c \
			arrcpy.c max_gnl.c g_n_l.c
SRCS =		$(PART1) $(PART2) $(BONUS) $(EXTRA)
OBJS =		$(SRCS:.c=.o)
FLAGS =		-Wall -Werror -Wextra
ALIASES =	>> ~/.zshrc

all:		$(NAME)

$(NAME):
		@gcc $(FLAGS) -c $(SRCS)
		@echo "All C files sucessfully compiled as objects!"
		@ar rc $(NAME) $(OBJS)
		@echo "Library [$(NAME)] archived succesfully!"
		@ranlib $(NAME)
		@echo "Library [$(NAME)] update success!"

clean:
		@/bin/rm -f $(OBJS)
		@echo "All object files removed."

libclean:
		@/bin/rm -f $(NAME)
		@echo "Library [$(NAME)] removed!"

fclean:		clean libclean

re:		fclean all
		@make clean

allclean:	fclean dela

compile:	dela
		@gcc $(FLAGS) main.c libft.a
		@echo "a.out: Successfully compiled with Main."

dela:
		@/bin/rm -f a.out
		@echo "a.out: successfully removed"
		@/bin/rm -f a.exe
		@echo "a.exe: successfully removed"

norme:
		Norminette $(SRCS)

cat1:	$(PART1)
		@cat $(PART1)

cat2:	$(PART2)
		@cat $(PART2)

catbonus:   $(BONUS)
		@cat $(BONUS)

catextra:   $(EXTRA)
		@cat $(EXTRA)

catft:	cat1 cat2 catbonus catextra

catheader: libft.h
		@cat libft.h

catall: catft catheader

compileAll:	re norme compile

config:
		vim ~/.zshrc

edit:
		vim Makefile

updateH:
		vim libft.h

updateMain:
		vim main.c

mainresults:
		open ~/Desktop/42FileChecker/maintest/libft/main.c

results:
		open ~/Desktop/42FileChecker/libft-unit-test/result.log

importAliases:
		@echo "" > ~/.zshrc
		@echo "Aliases emptied"
		@echo alias gcca="'gcc -Wall -Werror -Wextra'" $(ALIASES)
		@echo "Created alias [gcca]"
		@echo alias 42FileChecker="'bash ~/Desktop/42FileChecker/42FileChecker.sh'" $(ALIASES)
		@echo "Created alias [42FileChecker]"
		@echo alias mNorme="'make norme'" $(ALIASES)
		@echo "Created Alias [mNorme]"
		@echo alias mEdit="'make edit'" $(ALIASES)
		@echo "Created alias [mEdit]"
		@echo alias mCompile="'make compile'" $(ALIASES)
		@echo "Created Alias [mCompile]"
		@echo alias mConfig="'make config'" $(ALIASES)
		@echo "Created alias [mConfig]"
		@echo alias mCompileAll="'make compileAll'" $(ALIASES)
		@echo "Created alias [mCompileAll]"
		@echo alias mUpdateH="'make updateH'" $(ALIASES)
		@echo "Created alias [mUpdateH]"
		@echo alias mUpdateMain="'make updateMain'" $(ALIASES)
		@echo "Created alias [mUpdateMain]"
		@echo -e "PS!\nDon't forget to run command:\n['source ~/.zshrc']"

importFileChecker:
		@git clone https://github.com/jgigault/42FileChecker ~/Desktop/42FileChecker
		@echo "42 FileChecker cloned successfully"

42FC:
		@cd ~/Desktop/42FileChecker && bash ./42FileChecker.sh

setAliases:	importAliases
		@source ~/.zshrc
		@echo "Aliases activated!"
