CC=gcc
CFLAGS=-Wall

all: slotmachine

slotmachine: main.o
	$(CC) -o slotmachine main.o libODoors.a

main.o: main.c numbers.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm *.o slotmachine


