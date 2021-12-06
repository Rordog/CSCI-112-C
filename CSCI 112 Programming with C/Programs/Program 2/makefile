CC = gcc

EXEC_NAME = program2 

LDFLAGS = 
CFLAGS = -Wall -g

HEADERS = $(wildcard *.h)
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

$(EXEC_NAME): $(OBJ)
	@echo "Linking to make executable"
	$(CC) -o $@ $(OBJ) $(LDFLAGS)

%.o: %.c $(HEADERS)
	@echo "Compiling"
	$(CC) $(CFLAGS) -c $<

