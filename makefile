OBJS	= PROJETRN40.o
SOURCE	= PROJETRN40.c
HEADER	= Seaux.h List.h
OUT	= Tri.out
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

PROJETRN40.o: PROJETRN40.c
	$(CC) $(FLAGS) PROJETRN40.c 


clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
