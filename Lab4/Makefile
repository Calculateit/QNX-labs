all: release
release: main.o
	gcc main.o -o main_release
debug:
	gcc -g main.c -o main_debug
main.o: main.c
	gcc -c main.c
clean:
	rm main.o main_release main_debug
