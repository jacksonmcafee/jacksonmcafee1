OBJS	= file_init.o prob_gen.o main.o
SOURCE	= file_init.cpp prob_gen.cpp main.cpp
HEADER	= file_init.h prob_gen.h
OUT	= prob_gen.out
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

file_init.o: file_init.cpp
	$(CC) $(FLAGS) file_init.cpp 

prob_gen.o: prob_gen.cpp
	$(CC) $(FLAGS) prob_gen.cpp 

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp 


clean:
	rm -f $(OBJS) $(OUT)
