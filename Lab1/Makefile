release: main.o
	gcc main.o -o main_release
debug:
	gcc -g main.c -o main_debug
test: main_release
	./test_release.sh
main.o: main.c
	gcc -c main.c
clean:
	rm main.o main_release main_debug
#/** PhEDIT attribute block
#-11:16777215
#0:66:TextFont9:-3:-3:0
#66:68:TextFont9:0:-1:0
#68:189:TextFont9:-3:-3:0
#**  PhEDIT attribute block ends (-0000163)**/
