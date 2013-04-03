CC=g++
GCC_OPTIONS=-Wall -pedantic -I include
GL_OPTIONS=-framework OpenGL -framework GLUT 
OPTIONS=$(GCC_OPTIONS) $(GL_OPTIONS)


all:
	$(CC) example1.cpp Common/initShader.o $(OPTIONS) -o example