FLAGS =-Wall -g
CC = gcc 

all: connections

connections:main.o libclass.a 
	$(CC) $(FLAGS) -o connections main.o libclass.a

libclass.a:my_mat.o
	ar -rcs libclass.a my_mat.o	

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 

my_math.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c 	

.PHONY: clean
clean:
	rm -f *.o *.a *.so connections

