#Makefile for project with structures
program: build/main.o build/teacher.o
	gcc -o program build/main.o build/teacher.o
build/main.o: src/main.c 
	mkdir -p build
	gcc -c -o build/main.o src/main.c

build/teacher.o: src/teacher.c
	gcc -c -o build/teacher.o src/teacher.c

clean:
	rm -f *.o program
	rm -rf build/
