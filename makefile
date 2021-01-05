
CC = gcc
FLAGS = -Wall


all: isort txtfind

isort: main_isrot.o isort.o
	$(CC) $(FLAGS) -o isort main_isrot.o isort.o
	
txtfind: main_txt.o txtfind.o
	$(CC) $(FLAG.oS) -o txtfind main_txt.o txtfind.o

main_txt.o: main_txt.c 
	$(CC) $(FLAG.oS) -c main_txt.c
	
main_isrot.o: main_isrot.c 
	$(CC) $(FLAG.oS) -c main_isrot.c 
	
isort.o: isort.c isort.h
	$(CC) $(FLAGS) -c isort.c

txtfind.o: txtfind.c txtfind.h
	$(CC) $(FLAGS) -c txtfind.c

.PHONY: clean all 

clean: 
	rm -f *.o  txtfind isort
