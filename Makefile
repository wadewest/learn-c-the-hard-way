CFLAGS=-Wall -g

all: main

main: dbg.h

clean:
	rm -f main

run: main
	./main

valgrind: main
	valgrind ./main
