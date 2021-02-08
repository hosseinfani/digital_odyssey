CFLAGS = -O
CC = gcc

main: main.o logic.o complement.o conversion.o
	$(CC) $(CFLAGS) -o main main.o logic.o complement.o conversion.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

logic.o: logic.cpp
	$(CC) $(CFLAGS) -c logic.cpp

complement.o: complement.cpp
	$(CC) $(CFLAGS) -c complement.cpp

conversion.o: conversion.cpp
	$(CC) $(CFLAGS) -c conversion.cpp

clean:
	rm -f core *.o
