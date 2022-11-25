CC = gcc
FLAGS = -Wall -g

all: connections

connections: main.o my_mat.o
	$(CC) $(FLAGS) main.o my_mat.o -o connections 
	
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c 

.phony: clean all	

clean: 
	rm -f *.o connections