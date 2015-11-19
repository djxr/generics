CC=cc
CFLAGS=-std=c99 -Wall -g -pedantic

all: main

run:
	./main

clean:
	rm -f main
