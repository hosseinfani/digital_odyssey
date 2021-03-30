CFLAGS = -O
CC = gcc

main: main.o 
	$(CC) $(CFLAGS) -o main main.o 

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f core *.o
