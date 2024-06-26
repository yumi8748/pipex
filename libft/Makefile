NAME			= libft.a

INC				= inc/
SRC_DIR			= srcs/
OBJ_DIR			= obj/

CC				= cc
CFLAGS			= -Wall -Wextra -Werror -I
RM				= rm -f
AR				= ar rcs

FTIS_DIR		=	$(SRC_DIR)ft_is/ft_isalnum.c \
					$(SRC_DIR)ft_is/ft_isalpha.c \
					$(SRC_DIR)ft_is/ft_isascii.c \
					$(SRC_DIR)ft_is/ft_isdigit.c \
					$(SRC_DIR)ft_is/ft_isprint.c \
					$(SRC_DIR)ft_is/ft_max.c \
					$(SRC_DIR)ft_is/ft_min.c

FTLST_DIR		=	$(SRC_DIR)ft_lst/ft_lstadd_back.c \
					$(SRC_DIR)ft_lst/ft_lstadd_front.c \
					$(SRC_DIR)ft_lst/ft_lstclear.c \
					$(SRC_DIR)ft_lst/ft_lstdelone.c \
					$(SRC_DIR)ft_lst/ft_lstiter.c \
					$(SRC_DIR)ft_lst/ft_lstlast.c \
					$(SRC_DIR)ft_lst/ft_lstmap.c \
					$(SRC_DIR)ft_lst/ft_lstnew.c \
					$(SRC_DIR)ft_lst/ft_lstsize.c

FTMEM_DIR		=	$(SRC_DIR)ft_mem/ft_bzero.c \
					$(SRC_DIR)ft_mem/ft_calloc.c \
					$(SRC_DIR)ft_mem/ft_memchr.c \
					$(SRC_DIR)ft_mem/ft_memcmp.c \
					$(SRC_DIR)ft_mem/ft_memcpy.c \
					$(SRC_DIR)ft_mem/ft_memmove.c \
					$(SRC_DIR)ft_mem/ft_memset.c

FTPUT_DIR		=	$(SRC_DIR)ft_put/ft_putchar_fd.c \
					$(SRC_DIR)ft_put/ft_putendl_fd.c \
					$(SRC_DIR)ft_put/ft_putnbr_fd.c \
					$(SRC_DIR)ft_put/ft_putstr_fd.c

FTSTR_DIR		=	$(SRC_DIR)ft_str/ft_split.c \
					$(SRC_DIR)ft_str/ft_strchr.c \
					$(SRC_DIR)ft_str/ft_strdup.c \
					$(SRC_DIR)ft_str/ft_striteri.c \
					$(SRC_DIR)ft_str/ft_strjoin.c \
					$(SRC_DIR)ft_str/ft_strlcat.c \
					$(SRC_DIR)ft_str/ft_strlcpy.c \
					$(SRC_DIR)ft_str/ft_strlen.c \
					$(SRC_DIR)ft_str/ft_strmapi.c \
					$(SRC_DIR)ft_str/ft_strncmp.c \
					$(SRC_DIR)ft_str/ft_strnstr.c \
					$(SRC_DIR)ft_str/ft_strrchr.c \
					$(SRC_DIR)ft_str/ft_strtrim.c \
					$(SRC_DIR)ft_str/ft_substr.c 

FTTO_DIR		=	$(SRC_DIR)ft_to/ft_atoi.c \
					$(SRC_DIR)ft_to/ft_itoa.c \
					$(SRC_DIR)ft_to/ft_itoa_base.c \
					$(SRC_DIR)ft_to/ft_tolower.c \
					$(SRC_DIR)ft_to/ft_toupper.c

FTPRINTF_DIR	=	$(SRC_DIR)ft_printf/ft_printf.c \
					$(SRC_DIR)ft_printf/ft_handle_char.c \
					$(SRC_DIR)ft_printf/ft_handle_hex.c \
					$(SRC_DIR)ft_printf/ft_handle_int.c \
					$(SRC_DIR)ft_printf/ft_handle_percent.c \
					$(SRC_DIR)ft_printf/ft_handle_pointer.c \
					$(SRC_DIR)ft_printf/ft_handle_string.c \
					$(SRC_DIR)ft_printf/ft_handle_unsigned.c \
					$(SRC_DIR)ft_printf/ft_printf_utils.c

SO_LONG_DIR		= 	$(SRC_DIR)so_long/ft_strrncmp.c \
					$(SRC_DIR)so_long/ft_countchar.c \
					$(SRC_DIR)so_long/ft_strconcat_free.c \
					$(SRC_DIR)so_long/ft_euclidean_distance.c \
					$(SRC_DIR)so_long/ft_sqrt.c \
					$(SRC_DIR)so_long/ft_recursive_power.c \
					$(SRC_DIR)so_long/ft_newvector.c \
					$(SRC_DIR)so_long/ft_matrixlen.c \
					$(SRC_DIR)so_long/ft_free_matrix.c \
					$(SRC_DIR)so_long/ft_dup_matrix.c

GNL_DIR			=	$(SRC_DIR)get_next_line/get_next_line.c \
					$(SRC_DIR)get_next_line/get_next_line_utils.c

SRCS 			= $(FTIS_DIR) $(FTLST_DIR) $(FTMEM_DIR) $(FTPUT_DIR) $(FTSTR_DIR) $(FTTO_DIR) $(FTPRINTF_DIR) $(GNL_DIR) $(SO_LONG_DIR) $(INC)*.h

OBJ 			= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

all:	$(NAME)

$(NAME):	$(OBJ)
			$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
				@mkdir -p $(@D)
				$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
				@$(RM) -r $(OBJ_DIR)
				@$(RM) .cache_exists

fclean: 		clean
				@$(RM) $(NAME)

re: 			fclean all

.PHONY: 		all clean fclean re