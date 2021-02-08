CFLAGS = -O
CC = gcc

main: main.o arithmetic.o conversion.o
	$(CC) $(CFLAGS) -o main main.o arithmetic.o conversion.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

arithmetic.o: arithmetic.cpp
	$(CC) $(CFLAGS) -c arithmetic.cpp

conversion.o: conversion.cpp
	$(CC) $(CFLAGS) -c conversion.cpp

clean:
	rm -f core *.o
