all: clean build

clean:
	rm -f main main.o func.o

main.o:
	gcc -c -Iinclude main.c -o main.o
func.o:
	gcc -c func.c -o func.o
build: main.o func.o
	gcc main.o func.o -o main
