CFLAGS=-Wall -g

all: main

clean:
	rm -f main

run: main
	./main
