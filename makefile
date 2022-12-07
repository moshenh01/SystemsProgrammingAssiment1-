CC = gcc
FLAGS = -Wall -g

all: connections

connections: main.o libmat.a
	$(CC) $(FLAGS) main.o  libmat.a -o connections

libmat.a:  my_mat.o
	ar -rc libmat.a my_mat.o
	
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c 

.phony: clean all	

clean: 
	rm -f *.o connections

leakTest: clean connections
	valgrind --leak-check=full  --track-origins=yes --show-leak-kinds=all --error-exitcode=1 ./connections