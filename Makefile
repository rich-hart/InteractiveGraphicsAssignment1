
CC=g++
GCC_OPTIONS=-Wall -pedantic -I include
GL_OPTIONS=-framework OpenGL -framework GLUT 
OPTIONS=$(GCC_OPTIONS) $(GL_OPTIONS)


all: example
	$(CC) example1.cpp Common/initShader.o $(OPTIONS) -o example 

initShader.o: Common/initShader.cpp
	$(CC) $(OPTIONS) Common?initShader.cpp