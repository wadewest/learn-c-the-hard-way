CFLAGS=-Wall -g

all: main

main: object.o

clean:
	rm -f main

run: main
	./main

valgrind: main
	valgrind ./main
