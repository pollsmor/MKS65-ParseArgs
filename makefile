all: main.o
	gcc -o parseargs main.o

main.o: main.c
	gcc -c main.c

run:
	./parseargs

clean:
	rm *.o
	rm parseargs
