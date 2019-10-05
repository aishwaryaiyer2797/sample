CFLAGS=-Wall
LIBS=-lcheck

all: factorial

factorial: main.o implementation.o
	gcc -o sum2ints main.o implementation.o

main.o: main.c implementation.h
	gcc $(CFLAGS) -c main.c

implementation.o: implementation.c implementation.h
	gcc $(CFLAGS) -c implementation.c

test: factorial-test
	./factorial-test

factorial-test: implementation-test.o implementation.o
	gcc -o factorial-test implementation.o implementation-test.o $(LIBS)

implementation-test.o: implementation-test.c implementation.h
	gcc $(CFLAGS) -c implementation-test.c
