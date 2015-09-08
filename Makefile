CFLAGS=-Wall -g

clean:
	rm -f main

run: main
	./main

valgrind: main
	valgrind ./main
