CFLAGS = -O
CC = gcc

main: main.o logic.o complement.o conversion.o logic.o arithmetic.o
	$(CC) $(CFLAGS) -o main main.o logic.o complement.o conversion.o arithmetic.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

logic.o: logic.cpp
	$(CC) $(CFLAGS) -c logic.cpp

complement.o: complement.cpp
	$(CC) $(CFLAGS) -c complement.cpp

conversion.o: conversion.cpp
	$(CC) $(CFLAGS) -c conversion.cpp

arithmetic.o: arithmetic.cpp
	$(CC) $(CFLAGS) -c arithmetic.cpp

clean:
	rm -f core *.o
