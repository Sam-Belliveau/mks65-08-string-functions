
CC=gcc
FLAGS=-O3

all: ./strtest

./strtest: main.o mystring.o
	$(CC) $(FLAGS) main.o mystring.o -o ./strtest
	
main.o: ./main.c ./mystring.h
	$(CC) $(FLAGS) -c ./main.c  
	
mystring.o: ./mystring.c ./mystring.h
	$(CC) $(FLAGS) -c ./mystring.c  
	
run: ./strtest
	./strtest
	
clean:
	rm ./strtest ./*.o	
