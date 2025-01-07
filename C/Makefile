COLLEEN = Colleen
GRACE = Grace
SULLY = Sully

NAME = $(COLLEEN) $(GRACE) $(SULLY)

SRC_COLLEEN = Colleen.c
SRC_GRACE = Grace.c
SRC_SULLY = Sully.c

OBJ_COLLEEN = $(SRC_COLLEEN:.c=.o)
OBJ_GRACE = $(SRC_GRACE:.c=.o)
OBJ_SULLY = $(SRC_SULLY:.c=.o)

FLAGS = -Wall -Werror -Wextra

.PHONY : all clean fclean re

all: $(NAME)

$(OBJ_COLLEEN): $(SRC_COLLEEN)
	@gcc -c $(FLAGS) $(SRC_COLLEEN)

$(OBJ_GRACE): $(SRC_GRACE)
	@gcc -c $(FLAGS) $(SRC_GRACE)

$(OBJ_SULLY): $(SRC_SULLY)
	@gcc -c $(FLAGS) $(SRC_SULLY)

clean:
	@rm -rf $(OBJ_COLLEEN)
	@rm -rf $(OBJ_GRACE)
	@rm -rf $(OBJ_SULLY)

fclean: clean
	@rm -rf $(COLLEEN)
	@rm -rf $(GRACE)
	@rm -rf $(GRACE)_kid.c
	@rm -rf $(SULLY)
	@rm -rf $(SULLY)_*

re: fclean all