CC=g++
GCC_OPTIONS=-Wall -pedantic -I include
GL_OPTIONS=-framework OpenGL -framework GLUT 
OPTIONS=$(GCC_OPTIONS) $(GL_OPTIONS)


all: example

example: example1.o initShader.o
	$(CC) example1.o initShader.o $(OPTIONS) -o example

example.o: example1.cpp
	$(CC) -c example1.cpp

initShader.o: Common/initShader.cpp
	$(CC) -c Common/initShader.cpp

clean:
	rm -rf *.o example