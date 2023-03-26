all: clean build

clean:
	rm -f main main.o func.o main.dbg

main.o:
	gcc -c -Iinclude main.c -o main.o
func.o:
	gcc -c func.c -o func.o
build: main.o func.o
	gcc main.o func.o -o main

main.o.dbg:
	gcc -c -g -Iinclude main.c -o main.o
func.o.dbg:
	gcc -c -g func.c -o func.o
	
debug: main.o.dbg func.o.dbg
	gcc main.o func.o -o main.dbg
