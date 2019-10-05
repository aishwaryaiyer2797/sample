CFLAGS=-Wall
LIBS=-lcheck

all: fact

sum2ints: main1.o implementation1.o
gcc -o fact main1.o implementation1.o

main.o: main1.c implementation1.h
gcc $(CFLAGS) -c main1.c

implementation1.o: implementation1.c implementation1.h
gcc $(CFLAGS) -c implementation1.c

test: fact-test
./fact-test

fact-test: implementation1-test.o implementation1.o
gcc -o fact-test implementation1.o implementation1-test.o $(LIBS)

implementation1-test.o: implementation1-test.c implementation1.h
gcc $(CFLAGS) -c implementation1-test.c
